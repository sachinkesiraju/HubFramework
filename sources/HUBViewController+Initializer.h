/*
 *  Copyright (c) 2016 Spotify AB.
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 */

#import "HUBViewController.h"

NS_ASSUME_NONNULL_BEGIN

/// Extension enabling a HUBViewController instance to be initialized by the framework
@interface HUBViewController ()

/**
 *  Initialize an instance of this class with its required dependencies
 *
 *  @param viewURI The view URI that this view controller is for
 *  @param featureIdentifier The identifier of the feature that this view controller is for
 *  @param viewModelLoader The object to use to load view models for the view controller
 *  @param collectionViewFactory The factory to use to create collection views
 *  @param componentRegistry The registry to use to retrieve components to render
 *  @param componentLayoutManager The object that manages layout for components in the view controller
 *  @param actionHandler The object that will handle actions for this view controller
 *  @param scrollHandler The object that will handle scrolling for the view controller
 *  @param imageLoader The loader to use to load images for components
 */
- (instancetype)initWithViewURI:(NSURL *)viewURI
              featureIdentifier:(NSString *)featureIdentifier
                viewModelLoader:(HUBViewModelLoaderImplementation *)viewModelLoader
          collectionViewFactory:(HUBCollectionViewFactory *)collectionViewFactory
              componentRegistry:(id<HUBComponentRegistry>)componentRegistry
         componentLayoutManager:(id<HUBComponentLayoutManager>)componentLayoutManager
                  actionHandler:(id<HUBActionHandler>)actionHandler
                  scrollHandler:(id<HUBViewControllerScrollHandler>)scrollHandler
                    imageLoader:(id<HUBImageLoader>)imageLoader HUB_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
