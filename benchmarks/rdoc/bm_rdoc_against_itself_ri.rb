require './rdoc_bm_helper'
Bench.run [1] do |n|
  # run rdoc against itself with ri
  go 'rdp-rdoc-2.4.6', ['--ri']
end
