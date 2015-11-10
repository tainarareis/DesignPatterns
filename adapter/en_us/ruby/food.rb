module Food
	attr_accessor :ingredients

	def show_ingredients
		@ingredients.each do |ingredient, index|
			if index != @ingredients.size - 1
				print ingredient + ","
			else
				print ingredient + "."
			end
		end
	end

end
