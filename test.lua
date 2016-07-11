local luaproc = require("luaproc")
local socket = require'socket'
local z = 15
function test()
    x = 10
    print(x)
    print(z)
    print("hi")
end
local x = 30
assert(luaproc.newproc(test, {}))
print(x)
