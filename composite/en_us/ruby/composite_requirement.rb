class CompositeRequirement
  attr_accessor :requirements

  def initialize()
    @requirements = []
  end

  def add(requirement)
    @requirements << requirement
  end

  def show
    @requirements.each do |requirement|
      puts requirement.show
    end
  end
end
