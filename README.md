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
luafmt
```lua
-- lua script

local luafmt = require("luafmt")

luafmt.trace("{}{}", "hello", 2020)
luafmt.debug("{}{}", "hello", 2020)
luafmt.info("{}{}", "hello", 2020)
luafmt.warn("{}{}", "hello", 2020)
luafmt.error("{}{}", "hello", 2020)
luafmt.critical("{}{}", "hello", 2020)

print(luafmt.format("{}{}", "hello", 2020))

```
## Contacts
[![Join the chat](https://badges.gitter.im/brinkqiang/luafmt/Lobby.svg)](https://gitter.im/brinkqiang/luafmt)

## Thanks
