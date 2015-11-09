/**
 *	Main class with examples of application using Strategy Pattern.
 *
 *	@see	MeasureCalculator for more information about the context.
 */
public class Main {

	public static void main(String[] args) {

		/*
		 *	Examples of temperature measure.
		 */
		final float ANTARCTICA_CELSIUS = -89.6f;
		final float BRASILIA_CELSIUS = 36.4f;
		final float MOON_FAHRENHEIT = -387.0f;
		final float FORT_WAYNE_FAHRENHEIT = 38.0f;

		/*
		 *	The object calculator will be used to convert the measures.
		 */
		MeasureCalculator calculator = new MeasureCalculator();

		/*
		 *	Using the method convertMeasure, with a measure and an instance of
		 *	a Converter, the conversion of the measure is returned and printed.
		 *	The value returned from the method is not used in this the example.
		 */
		System.out.println("Converting Celsius to Fahrenheit:");
		calculator.convertMeasure(ANTARCTICA_CELSIUS, new CelsiusToFahrenheit());
		calculator.convertMeasure(BRASILIA_CELSIUS, new CelsiusToFahrenheit());

		System.out.println("Converting Fahrenheit to Celsius:");
		calculator.convertMeasure(MOON_FAHRENHEIT, new FahrenheitToCelsius());
		calculator.convertMeasure(FORT_WAYNE_FAHRENHEIT, new FahrenheitToCelsius());
	}
}
