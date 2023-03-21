public class rgb_to_hex {
    public static void main(String[] args) {
        //Setting initial variable values
        int r = 255;
        int g = 127;
        int b = 0;
        
        //Using the rgbToHex function, create a hexColor string
        String hexColor = rgbToHex(r, g, b);
        
        //Display output to user
        System.out.println("RGB color (" + r + ", " + g + ", " + b + ") = " + hexColor);
    }

    public static String rgbToHex(int r, int g, int b) {
        //Convert each rgb into hexadecimal
        r = Math.min(255, Math.max(0, r));
        g = Math.min(255, Math.max(0, g));
        b = Math.min(255, Math.max(0, b));
        return String.format("%02X%02X%02X", r, g, b);
    }
}

//Test with RGB color (255, 127, 0) = FF7F00


