#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
// Function to simulate reading temperature from the sensor 
float readTemperature() { 
    // Simulate temperature reading (replace this with actual sensor reading) 
    return 25.0 + ((rand() % 10) - 5) / 10.0;  // Simulated temperature between 24.5 and 25.5 
} 
 
// Function to simulate reading humidity from the sensor 
float readHumidity() { 
    // Simulate humidity reading (replace this with actual sensor reading) 
    return 60.0 + ((rand() % 20) - 10) / 10.0;  // Simulated humidity between 58 and 62 
} 
 
// Function to control the greenhouse climate based on sensor readings 
void controlGreenhouse(float temperature, float humidity) { 
    // Your climate control logic goes here 
    // For this example, let's print the current readings 
    printf("Temperature: %.2f°C, Humidity: %.2f%%\n", temperature, humidity); 
 
    // Add your logic to adjust temperature, humidity, etc. based on the readings 
    // For simplicity, this is just a placeholder 
 
    // Check if it's sunny or raining (replace this with actual sensor reading) 
    int isSunny = rand() % 2;  // Simulated sunny (1) or rainy (0) 
 
    if (isSunny) { 
        // Adjust the climate for sunny conditions 
        printf("Sunny weather - adjusting climate for sunny conditions\n"); 
        // Add your sunny weather control logic here 
    } else { 
        // Adjust the climate for rainy conditions 
        printf("Rainy weather - adjusting climate for rainy conditions\n"); 
        // Add your rainy weather control logic here 
    } 
} 
 
int main() { 
    // Seed the random number generator 
    srand(time(NULL)); 
 
    // Simulation loop 
    for (int i = 0; i < 10; ++i) { 
        // Simulate reading temperature and humidity from sensors 
        float temperature = readTemperature(); 
        float humidity = readHumidity(); 
 
        // Control the greenhouse climate based on sensor readings 
        controlGreenhouse(temperature, humidity); 
 
        // Simulate a delay between readings (replace this with actual delay code) 
        printf("=================================\n"); 
    } 
 
    return 0; 
}