require './shopping_cart'
require './session.rb'

class ObjectivePurchase
    include ShoppingCart

    attr_accessor :session

    def initialize
      @session = Session.new
    end

    def register_user
      @purchase.user = @session.user_logged
    end

    def delivery(address)
      if address == nil
        @purchase.address = @session.user_logged.address
      else
        @purchase.address = address
      end
    end
end
