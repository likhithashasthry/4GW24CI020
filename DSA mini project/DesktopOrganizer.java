import java.io.IOException;
import java.nio.file.*;
import java.nio.file.attribute.BasicFileAttributes;
import java.time.ZoneId;
import java.time.format.TextStyle;
import java.util.Locale;
import java.util.Scanner;
import java.util.Stack;

public class DesktopOrganizer {

    static final String DESKTOP_PATH = "C:\\Users\\LIKITHA\\Desktop";
    static final String ORGANIZER_PATH = "D:\\Desktop_Organizer";

    // STACK FOR UNDO
    static Stack<MoveRecord> undoStack = new Stack<>();

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("\n1. Organize Desktop");
            System.out.println("2. Undo Last Operation");
            System.out.println("3. Exit");
            System.out.print("Enter choice: ");

            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    organizeDesktop();
                    break;
                case 2:
                    undoLastMove();
                    break;
                case 3:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid choice");
            }
        }
    }

    static void organizeDesktop() {

        Path desktop = Paths.get(DESKTOP_PATH);
        Path organizer = Paths.get(ORGANIZER_PATH);

        try {
            if (!Files.exists(organizer)) {
                Files.createDirectory(organizer);
            }

            try (DirectoryStream<Path> stream = Files.newDirectoryStream(desktop)) {

                for (Path item : stream) {

                    if (item.getFileName().toString().equals("Desktop_Organizer"))
                        continue;

                    BasicFileAttributes attrs =
                            Files.readAttributes(item, BasicFileAttributes.class);

                    String monthName = attrs.creationTime()
                            .toInstant()
                            .atZone(ZoneId.systemDefault())
                            .getMonth()
                            .getDisplayName(TextStyle.FULL, Locale.ENGLISH);

                    Path monthFolder = organizer.resolve(monthName);
                    if (!Files.exists(monthFolder)) {
                        Files.createDirectory(monthFolder);
                    }

                    Path destination = monthFolder.resolve(item.getFileName());

                    moveRecursively(item, destination);

                    // PUSH INTO STACK FOR UNDO
                    undoStack.push(new MoveRecord(destination, item));
                }
            }

            System.out.println("Desktop files organised");

        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    // 🔁 RECURSIVE MOVE
    static void moveRecursively(Path source, Path destination) throws IOException {

        if (Files.isDirectory(source)) {

            if (!Files.exists(destination)) {
                Files.createDirectory(destination);
            }

            try (DirectoryStream<Path> contents =
                         Files.newDirectoryStream(source)) {

                for (Path child : contents) {
                    moveRecursively(child, destination.resolve(child.getFileName()));
                }
            }

            Files.delete(source);

        } else {
            Files.move(source, destination, StandardCopyOption.REPLACE_EXISTING);
        }
    }

    // 🔙 UNDO FUNCTION
    static void undoLastMove() {

        if (undoStack.isEmpty()) {
            System.out.println("Nothing to undo");
            return;
        }

        MoveRecord record = undoStack.pop();

        try {
            moveRecursively(record.source, record.destination);
            System.out.println("Undo successful");
        } catch (IOException e) {
            System.out.println("Undo failed: " + e.getMessage());
        }
    }
}

// CLASS TO STORE MOVE DETAILS
class MoveRecord {
    Path source;
    Path destination;

    MoveRecord(Path source, Path destination) {
        this.source = source;
        this.destination = destination;
    }
}
