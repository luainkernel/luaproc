--tcp server test
socket = require("socket")
luaproc = require("luaproc")
local client = nil

local server = socket.tcp()
assert(server:bind("*", 0))
assert(server:listen(3))
local ip, port = server:getsockname()
print("ip - "..ip.." port - "..port)
luaproc.setnumworkers(100)
while 1 do
client = server:accept() --waits for a connection
luaproc.newproc(function ()
        client:receive()
        client:send("hello world")
        client:close()
    end)
getmetatable(client).__gc = nil
end
