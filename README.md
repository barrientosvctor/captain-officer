# captain-officer
A Discord moderation bot written in C.

## How to compile

- First, you should download the Concord library. The easiest way to do it is
executing the `compile_concord.sh` script.

```sh
sh ./scripts/compile_concord.sh
```

- Then you need to create a folder in the root directory named: `build`. Here
you will go to setup CMake for this project.

Don't forget to create a `config.json` in the root directory to specify the bot
token and other configurations for discord bot. You should take [this](https://github.com/Cogmasters/concord/blob/master/config.json)
json file as example.
