class User
  attr_reader :name, :address

  # Fictional user
  def initialize
    @name = "Logged"
    @address = "501 Auburn Ave NE, Atlanta,"\
      " GA 30312, Estados Unidos"
  end
end

class Session
  attr_accessor :user_logged

  def initialize
    @user_logged = User.new
  end
end
