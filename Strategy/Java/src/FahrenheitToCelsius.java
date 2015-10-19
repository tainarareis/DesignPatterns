
public class FahrenheitToCelsius implements Converter{

	private final String CELSIUS = "°C (Celsius)";
	private final String FAHRENHEIT = "°F (Fahrenheit)";
	
	@Override
	public float convert(float currentMeasure) {
		float convertedMeasure =  (currentMeasure - 32f)*(5f/9f);
		System.out.println(currentMeasure + FAHRENHEIT + " = " + convertedMeasure + CELSIUS);
		return convertedMeasure;
	}

	
}
