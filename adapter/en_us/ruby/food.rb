module Food
	attr_accessor :ingredients

	def show_ingredients
		print_food_type

		last_position = @ingredients.size - 1

		@ingredients.each_with_index do |ingredient, index|
			if index != last_position
				print ingredient + ", "
			else
				print ingredient + ".\n"
			end
		end

	end

	def print_food_type
		if self.is_a? PepperoniPizza
			print "Pepperoni: "
		else
			print "Others: "
		end
	end
end
