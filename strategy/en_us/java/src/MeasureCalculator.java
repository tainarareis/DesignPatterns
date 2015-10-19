public class MeasureCalculator {

	public float convertMeasure(float currentMeasure, Converter converter) {

		float convertedMeasure = converter.convert(currentMeasure);

		return convertedMeasure;
	}
}