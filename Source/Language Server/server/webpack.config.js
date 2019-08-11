//@ts-check

'use strict';

const path = require('path');

/**@type {import('webpack').Configuration}*/
const configServer = {
  mode: 'none',
  target: 'node',
  node: {
    __dirname: false
  },
  resolve: {
    //mainFields: ['module', 'main'],
    extensions: ['.ts', '.js']
  },
  module: {
    rules: [{
      test: /\.ts$/,
      exclude: /node_modules/,
      use: [{
        loader: 'ts-loader',
        options: {
          compilerOptions: {
            "sourceMap": true,
            "module": "es6" // override `tsconfig.json` so that TypeScript emits native JavaScript modules.
          }
        }
      }]
    }]
  },
  externals: {
    'vscode': 'commonjs vscode',
  },
  entry: {
    extension: './server/src/server.ts',
  },
  output: {
    filename: 'server.js',
    path: path.join(__dirname, 'out'),
    libraryTarget: "commonjs",
  },
  devtool: 'source-map'
};

module.exports = configServer;