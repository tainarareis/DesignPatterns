module Requirement
  attr_reader :title, :content

  def initialize(title, content)
    @title = title
    @content = content
  end

  def show
    puts self.class.to_s + ": " + @title + "\nContent " + @content
  end
end
