// Subsystem Components
class AudioPlayer {
    public void playAudio(String filename) {
        System.out.println("Playing audio file: " + filename);
    }

    public void stopAudio() {
        System.out.println("Stopping audio playback.");
    }
}

class VideoPlayer {
    public void playVideo(String filename) {
        System.out.println("Playing video file: " + filename);
    }

    public void stopVideo() {
        System.out.println("Stopping video playback.");
    }
}

class ImageLoader {
    public void loadImage(String filename) {
        System.out.println("Loading image file: " + filename);
    }

    public void unloadImage() {
        System.out.println("Unloading image.");
    }
}

// Facade Class
class MultimediaFacade {
    private AudioPlayer audioPlayer;
    private VideoPlayer videoPlayer;
    private ImageLoader imageLoader;

    public MultimediaFacade() {
        this.audioPlayer = new AudioPlayer();
        this.videoPlayer = new VideoPlayer();
        this.imageLoader = new ImageLoader();
    }

    public void playMedia(String filename, String mediaType) {
        switch (mediaType.toLowerCase()) {
            case "audio":
                audioPlayer.playAudio(filename);
                break;
            case "video":
                videoPlayer.playVideo(filename);
                break;
            case "image":
                imageLoader.loadImage(filename);
                break;
            default:
                System.out.println("Unsupported media type: " + mediaType);
        }
    }

    public void stopAllMedia() {
        audioPlayer.stopAudio();
        videoPlayer.stopVideo();
        imageLoader.unloadImage();
    }
}

// Client Code
public class Facade {
    public static void main(String[] args) {
        MultimediaFacade facade = new MultimediaFacade();

        // Client interacts with the facade, not the complex subsystem directly
        facade.playMedia("song.mp3", "audio");
        facade.playMedia("movie.mp4", "video");
        facade.playMedia("picture.jpg", "image");

        System.out.println("\nStopping all media:");
        facade.stopAllMedia();

        facade.playMedia("unknown.file", "unknown");
    }
}