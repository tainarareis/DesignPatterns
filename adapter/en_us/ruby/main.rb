require './pepperoni_pizza'
require './food_adapter'
require './menu'
require './broccoli_pizza'

menu = Menu.new

normal_pizza = PepperoniPizza.new

# Adaptee
vegan_food = BroccoliPizza.new
# Adapter
vegan_pizza = FoodAdapter.new(vegan_food)

menu.add(normal_pizza)

menu.add(vegan_pizza)

menu.show_menu
