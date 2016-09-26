<img alt="The Hub Framework" src="readme-banner.jpg" width="100%" max-width=1008>

[![codecov](https://codecov.spotify.net/ghe/iOS/HubFramework/branch/master/graph/badge.svg)](https://codecov.spotify.net/ghe/iOS/HubFramework) [![Documentation website](https://img.shields.io/badge/Documentation-Website-blue.svg)](https://ghe.spotify.net/pages/iOS/HubFramework)
[![Dash docset feed](https://img.shields.io/badge/Documentation-Dash%20docset%20feed-blue.svg)](dash-feed://https%3A%2F%2Fghe%2Espotify%2Enet%2Fpages%2FiOS%2FHubFramework%2Fdocsets%2FHubFramework%2Exml)

Welcome to the Hub Framework - a toolkit for building native, component-driven UIs. It replaces the long and hard process of building, tweaking and shipping a new UI from scratch with **Components** & **Content Operations**.

## Components

Instead of building `UIViewControllers` that each have hard-wired behaviors for UI in terms of controls, data binding & selection handling - a Hub Framework-powered UI is all about components.

Components can be reused and rearranged in any way, and render any model. They each define a rectangle on the screen in which anything can be rendered, making it easy to quickly iterate on UI and creating modular building blocks that reduce the need for code duplication.

The good news is that you don't have to rewrite your existing `UIViews` to start using the Hub Framework, instead, the architecture of the framework is completely protocol oriented, making it easy to add compatibility to existing UI.

To learn more about components, check out the [Component programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/component-programming-guide.html).

## Content Operations

To match the highly dynamic component-driven UIs, content operations define what content to render in a declarative fashion. Content can either be defined in code, running locally in the application, or through JSON that is provided by a server-side system. This enables you to easily aggregate data from multiple sources, and to release new features directly from the backend.

Each feature of an application can define its own content operations, and put them together to form a **content loading chain**. Each operation can perform an atomic mutation of the UI state, enabling easy implementation of things like A/B testing or providing system-wide functionality like caching or loading indicators.

To learn more about content operations, check out the [Content programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/content-programming-guide.html).

## Getting started

To enable you to quickly get started using the Hub Framework, we've created a [**getting started guide**](https://ghe.spotify.net/pages/iOS/HubFramework/getting-started-guide.html) that will give you a step-by-step guide to building your first view using it.

There are also a series of **programming guides** that each introduce you to different aspects of the framework.

- [Component programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/component-programming-guide.html)
- [Content programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/content-programming-guide.html)
- [Layout programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/layout-programming-guide.html)
- [JSON programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/json-programming-guide.html)
- [Action programming guide](https://ghe.spotify.net/pages/iOS/HubFramework/action-programming-guide.html)

### Documentation

The Hub Framework’s API is also well documented and we generate both a [documentation website](https://ghe.spotify.net/pages/iOS/HubFramework/) as well as a DocSet for the documentation app [Dash](https://kapeli.com/dash). The documentation is also written in such a way that Xcode will present it on usage.

The Dash documentation is updated automatically for you on any changes to HubFramework. Get it by subscribing to the [https://ghe.spotify.net/pages/iOS/HubFramework/docsets/HubFramework.xml](dash-feed://https%3A%2F%2Fghe%2Espotify%2Enet%2Fpages%2FiOS%2FHubFramework%2Fdocsets%2FHubFramework%2Exml) feed.

## Xcode file templates

The Hub Framework contains a set of Xcode file templates that make it easy to create the boilerplate for components, content operations, etc.

To install them, simply copy the `Hub Framework` folder located in `templates/xcode` to `~/Library/Developer/Xcode/Templates/File Templates` (You may need to create the last two folders in that path).

## Need help?

We're here to help you! If you ever need any assistance with the Hub Framework, or want to get a more hands-on introduction to it - reach out! All questions are welcome, and all feedback is very appreciated. The easiest way to reach the team working on the Hub Framework is to reach out in the `#hubitup` channel on Slack, or email `hubitup@spotify.com`.

We also offer workshops to help new developers familiarize themselves with the framework. Please reach out if you want to book such a workshop for your team!

## Contributing

Anyone is more than welcome to contribute to the Hub Framework! Together we can make the framework even more capable, and help each other fix any issues that we might find. However, before you contribute, please read [our contribution guidlines](CONTRIBUTING.md).