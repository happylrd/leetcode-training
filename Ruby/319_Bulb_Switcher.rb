# @param {Integer} n
# @return {Integer}
def bulb_switch(n)
  Math.sqrt(n).to_i
end

def test
  puts bulb_switch(5)
  # final state: 1 0 0 1 0 , n = 2
end

test