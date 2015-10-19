public class CelsiusToFahrenheit implements Converter {

	private final String CELSIUS = "°C (Celsius)";
	private final String FAHRENHEIT = "°F (Fahrenheit)";

	@Override
	public float convert(float currentMeasure) {

		float convertedMeasure = (currentMeasure * (9f / 5f)) + 32f;

		System.out.println(currentMeasure + CELSIUS + " = " + convertedMeasure + FAHRENHEIT);

		return convertedMeasure;
	}
}