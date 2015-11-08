require './session'

class Purchase
  attr_reader :address, :total
  attr_accessor :user

  def initialize
    @user = User.new
  end
end
