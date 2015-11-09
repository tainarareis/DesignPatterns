require './shopping_cart'

class DefaultPurchase
  include ShoppingCart

  DEFAULT_USER = :'Anonymous'

  def register_user
    @purchase.user.name = DEFAULT_USER
  end

  def delivery(address)
  end
end
