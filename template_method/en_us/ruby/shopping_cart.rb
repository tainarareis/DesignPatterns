require './purchase'

module ShoppingCart
  attr_reader :total
  attr_accessor :items, :purchase

  # Call all other methods
  def buy
    @purchase = Purchase.new
    @purchase.total = calculate_total
    register_user
    delivery_address
    realize_payment
  end

  def put(item_value)
    if items != nil
      @items << item_value
    else
      @items = []
    end
  end

  def calculate_total
    @items.each do |item_value|
      @total += item_value
    end
  end

  def realize_payment
    puts "Redirecting to payment page"
  end

  # To Override
  def register_user
    raise Exception.new('User null')
  end

  # To Override
  def delivery(address)
    raise Exception.new('Address not setted')
  end
end
