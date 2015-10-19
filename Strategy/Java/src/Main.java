
public class Main {

	
	public static void main(String[] args) {
	
		final float ANTARCTICA_CELSIUS = -89.6f;
		final float BRASILIA_CELSIUS = 36.4f;
		final float MOON_FAHRENHEIT = -387.0f;
		final float FORT_WAYNE_FAHRENHEIT = 38.0f; 
		
		MeasureCalculator calculator = new MeasureCalculator();
		
		calculator.convertMeasure(ANTARCTICA_CELSIUS, new CelsiusToFahrenheit());
		calculator.convertMeasure(BRASILIA_CELSIUS,new CelsiusToFahrenheit());
		calculator.convertMeasure(MOON_FAHRENHEIT, new FahrenheitToCelsius());
		calculator.convertMeasure(FORT_WAYNE_FAHRENHEIT, new FahrenheitToCelsius());
	}

}
