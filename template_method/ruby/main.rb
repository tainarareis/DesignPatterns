require './default_purchase'
require './objective_purchase'

# Without an authenticate user.
# It is need put only the place to delivery
default_purchase = DefaultPurchase.new
default_purchase.put(7.50)
default_purchase.delivery("221B Baker Street")

# This get data of session, address is optional
objective_purchase = ObjectivePurchase.new
objective_purchase.put(10.99)

# Run!
default_purchase.buy
objective_purchase.buy
