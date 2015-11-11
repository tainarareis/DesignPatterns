require './food'

class PepperoniPizza
	include Food

	def initialize()
		@ingredients = ['Pepperoni', 'Crust']
	end
end
