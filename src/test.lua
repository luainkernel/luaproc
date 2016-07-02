--tcp server test
socket = require("socket")
luaproc = require("luaproc")
local client = nil

function callserver()
        print(tostring(client))
        client:settimeout(10)
        local data, err = client:receive()
        print(err)
        print(data)
        client:send("hello world")
        client:close()
end


local server = socket.tcp()
assert(server:bind("*", 80))
assert(server:listen(10))
local ip, port = server:getsockname()
print("ip - "..ip.." port - "..port)
luaproc.setnumworkers(10)
while 1 do
client = server:accept() --waits for a connection
luaproc.newproc(callserver)
getmetatable(client).__gc = nil
end
