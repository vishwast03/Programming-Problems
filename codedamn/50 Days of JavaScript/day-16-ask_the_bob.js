function hey(message) {
    if(message === "") {
        return `Fine. Be that way!`;
    }
    else if(message.substring(0, message.indexOf(" ")).toLowerCase() === "how" && message[message.length -1] === "?") {
        return `Sure.`;
    }
    else if(message[message.length -1] === "?") {
        return `Calm down, I know what I'm doing!`;
    }
    else if(message === message.toUpperCase()) {
        return `Whoa, chill out!`;
    }
    else {
        return `Whatever.`;
    }
}
