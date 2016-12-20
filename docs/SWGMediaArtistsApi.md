# SWGMediaArtistsApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addArtistUsingPOST**](SWGMediaArtistsApi.md#addartistusingpost) | **POST** /media/artists | Adds a new artist in the system
[**createArtistTemplateUsingPOST**](SWGMediaArtistsApi.md#createartisttemplateusingpost) | **POST** /media/artists/templates | Create an artist template
[**deleteArtistTemplateUsingDELETE**](SWGMediaArtistsApi.md#deleteartisttemplateusingdelete) | **DELETE** /media/artists/templates/{id} | Delete an artist template
[**deleteArtistUsingDELETE**](SWGMediaArtistsApi.md#deleteartistusingdelete) | **DELETE** /media/artists/{id} | Removes an artist from the system IF no resources are attached to it
[**getArtistTemplateUsingGET**](SWGMediaArtistsApi.md#getartisttemplateusingget) | **GET** /media/artists/templates/{id} | Get a single artist template
[**getArtistTemplatesUsingGET**](SWGMediaArtistsApi.md#getartisttemplatesusingget) | **GET** /media/artists/templates | List and search artist templates
[**getArtistUsingGET**](SWGMediaArtistsApi.md#getartistusingget) | **GET** /media/artists/{id} | Loads a specific artist details
[**searchArtistsUsingGET**](SWGMediaArtistsApi.md#searchartistsusingget) | **GET** /media/artists | Search for artists
[**updateArtistTemplateUsingPUT**](SWGMediaArtistsApi.md#updateartisttemplateusingput) | **PUT** /media/artists/templates/{id} | Update an artist template
[**updateArtistUsingPUT**](SWGMediaArtistsApi.md#updateartistusingput) | **PUT** /media/artists/{id} | Modifies an artist details


# **addArtistUsingPOST**
```objc
-(NSNumber*) addArtistUsingPOSTWithArtistResource: (SWGArtistResource*) artistResource
        completionHandler: (void (^)(SWGArtistResource* output, NSError* error)) handler;
```

Adds a new artist in the system

Adds a new artist in the system. Use specific media contributions endpoint to add contributions

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGArtistResource* artistResource = [[SWGArtistResource alloc] init]; // The new artist (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Adds a new artist in the system
[apiInstance addArtistUsingPOSTWithArtistResource:artistResource
          completionHandler: ^(SWGArtistResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->addArtistUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **artistResource** | [**SWGArtistResource***](SWGArtistResource*.md)| The new artist | [optional] 

### Return type

[**SWGArtistResource***](SWGArtistResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createArtistTemplateUsingPOST**
```objc
-(NSNumber*) createArtistTemplateUsingPOSTWithArtistTemplateResource: (SWGTemplateResource*) artistTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create an artist template

Artist Templates define a type of artist and the properties they have

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGTemplateResource* artistTemplateResource = [[SWGTemplateResource alloc] init]; // The artist template resource object (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Create an artist template
[apiInstance createArtistTemplateUsingPOSTWithArtistTemplateResource:artistTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->createArtistTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **artistTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The artist template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteArtistTemplateUsingDELETE**
```objc
-(NSNumber*) deleteArtistTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete an artist template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Delete an artist template
[apiInstance deleteArtistTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->deleteArtistTemplateUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **cascade** | **NSString***| The value needed to delete used templates | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteArtistUsingDELETE**
```objc
-(NSNumber*) deleteArtistUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Removes an artist from the system IF no resources are attached to it

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The artist id

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Removes an artist from the system IF no resources are attached to it
[apiInstance deleteArtistUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->deleteArtistUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The artist id | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArtistTemplateUsingGET**
```objc
-(NSNumber*) getArtistTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single artist template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Get a single artist template
[apiInstance getArtistTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->getArtistTemplateUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArtistTemplatesUsingGET**
```objc
-(NSNumber*) getArtistTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search artist templates

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// List and search artist templates
[apiInstance getArtistTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->getArtistTemplatesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceTemplateResource_***](SWGPageResourceTemplateResource_.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getArtistUsingGET**
```objc
-(NSNumber*) getArtistUsingGETWithId: (NSNumber*) _id
    showContributions: (NSNumber*) showContributions
        completionHandler: (void (^)(SWGArtistResource* output, NSError* error)) handler;
```

Loads a specific artist details

### Example 
```objc

NSNumber* _id = @789; // The artist id
NSNumber* showContributions = @56; // The number of contributions to show fetch (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Loads a specific artist details
[apiInstance getArtistUsingGETWithId:_id
              showContributions:showContributions
          completionHandler: ^(SWGArtistResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->getArtistUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The artist id | 
 **showContributions** | **NSNumber***| The number of contributions to show fetch | [optional] 

### Return type

[**SWGArtistResource***](SWGArtistResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **searchArtistsUsingGET**
```objc
-(NSNumber*) searchArtistsUsingGETWithFilterArtistsByName: (NSString*) filterArtistsByName
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageResourceArtistResource_* output, NSError* error)) handler;
```

Search for artists

### Example 
```objc

NSString* filterArtistsByName = @"filterArtistsByName_example"; // Filter for artists which name *STARTS* with the given string (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Search for artists
[apiInstance searchArtistsUsingGETWithFilterArtistsByName:filterArtistsByName
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageResourceArtistResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->searchArtistsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterArtistsByName** | **NSString***| Filter for artists which name *STARTS* with the given string | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**SWGPageResourceArtistResource_***](SWGPageResourceArtistResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArtistTemplateUsingPUT**
```objc
-(NSNumber*) updateArtistTemplateUsingPUTWithId: (NSString*) _id
    artistTemplateResource: (SWGTemplateResource*) artistTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an artist template

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* artistTemplateResource = [[SWGTemplateResource alloc] init]; // The artist template resource object (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Update an artist template
[apiInstance updateArtistTemplateUsingPUTWithId:_id
              artistTemplateResource:artistTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->updateArtistTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **artistTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The artist template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateArtistUsingPUT**
```objc
-(NSNumber*) updateArtistUsingPUTWithId: (NSNumber*) _id
    artistResource: (SWGArtistResource*) artistResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Modifies an artist details

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The artist id
SWGArtistResource* artistResource = [[SWGArtistResource alloc] init]; // The new artist (optional)

SWGMediaArtistsApi*apiInstance = [[SWGMediaArtistsApi alloc] init];

// Modifies an artist details
[apiInstance updateArtistUsingPUTWithId:_id
              artistResource:artistResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGMediaArtistsApi->updateArtistUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The artist id | 
 **artistResource** | [**SWGArtistResource***](SWGArtistResource*.md)| The new artist | [optional] 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

