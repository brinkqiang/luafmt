-- lua script

local luafmt = require("luafmt")

luafmt.trace("{}{}", "hello", 2020)
luafmt.debug("{}{}", "hello", 2020)
luafmt.info("{}{}", "hello", 2020)
luafmt.warn("{}{}", "hello", 2020)
luafmt.error("{}{}", "hello", 2020)
luafmt.critical("{}{}", "hello", 2020)

print(luafmt.format("{}{}", "hello", 2020))
