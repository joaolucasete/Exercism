class Raindrops
  def self.convert number
    obj = {
      3 => "Pling",
      5 => "Plang",
      7 => "Plong",
    }
    if number < 3
      number
    else
      aux = ""
      obj.each_pair do |key, value|
        if number % key == 0
          aux += value
      end
      aux
    end
    #obj.map { |key, value| value if (key % number == 0) }
  end
end

puts Raindrops.convert(21)