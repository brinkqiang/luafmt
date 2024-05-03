# luafmt

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![luafmt](https://img.shields.io/badge/brinkqiang-luafmt-blue.svg?style=flat-square)](https://github.com/brinkqiang/luafmt)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/luafmt/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/luafmt.svg?label=Stars)](https://github.com/brinkqiang/luafmt) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/luafmt.svg?label=Fork)](https://github.com/brinkqiang/luafmt)

## Build status
| [Linux][lin-link] | [MacOSX][osx-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![osx-badge]       | ![win-badge]        |

[lin-badge]: https://travis-ci.org/brinkqiang/luafmt.svg?branch=master "Travis build status"
[lin-link]:  https://travis-ci.org/brinkqiang/luafmt "Travis build status"
[osx-badge]: https://travis-ci.org/brinkqiang/luafmt.svg?branch=master "Travis build status"
[osx-link]:  https://travis-ci.org/brinkqiang/luafmt "Travis build status"
[win-badge]: https://ci.appveyor.com/api/projects/status/github/brinkqiang/luafmt?branch=master&svg=true "AppVeyor build status"
[win-link]:  https://ci.appveyor.com/project/brinkqiang/luafmt "AppVeyor build status"

## env
install cmake

## Intro
luafmt based on fmt

lua ../script/main.lua

```lua
-- lua script

local luafmt = require("luafmt")

luafmt.trace("{}{}", "hello", 2020)
luafmt.debug("{}{}", "hello", 2020)
luafmt.info("{}{}", "hello", 2020)
luafmt.warn("{}{}", "hello", 2020)
luafmt.error("{}{}", "hello", 2020)
luafmt.critical("{}{}", "hello", 2020)

print(luafmt.format("{0}{1}", "hello", 2020))
print(luafmt.format("{1}{0}", "hello", 2020))
```

out
```
[2020-12-12 22:18:45 060273] [19372][trace] hello2020
[2020-12-12 22:18:45 060462] [19372][debug] hello2020
[2020-12-12 22:18:45 060648] [19372][info] hello2020
[2020-12-12 22:18:45 060759] [19372][warning] hello2020
[2020-12-12 22:18:45 060909] [19372][error] hello2020
[2020-12-12 22:18:45 061039] [19372][critical] hello2020
hello2020
2020hello
```

## Contacts

## Thanks
