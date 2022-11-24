#!/usr/bin/node

const request = require('request');

const Id = process.argv[2];
const url = `https://swapi.dev/api/films/${Id}/`;
request(url, async function (error, response, body) {
    if (error) {
        console.log(error);
    } else {
        const characters = JSON.parse(body).characters;
        for (const character of characters) {
            const name = await new Promise((resolve, reject) => {
                request(character, (error, name, html) => {
                    if (error) {
                        reject(error);
                    } else {
                        resolve(JSON.parse(html).name);
                    }
                });
            });
            console.log(name);
        }
    }
});
