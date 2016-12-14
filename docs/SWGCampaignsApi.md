# SWGCampaignsApi

All URIs are relative to *https://devsandbox.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addChallengesUsingPOST**](SWGCampaignsApi.md#addchallengesusingpost) | **POST** /campaigns/{id}/challenges | Add a challenge to a campaign
[**createCampaignTemplateUsingPOST**](SWGCampaignsApi.md#createcampaigntemplateusingpost) | **POST** /campaigns/templates | Create a campaign template
[**createCampaignUsingPOST**](SWGCampaignsApi.md#createcampaignusingpost) | **POST** /campaigns | Create a campaign
[**deleteCampaignTemplateUsingDELETE**](SWGCampaignsApi.md#deletecampaigntemplateusingdelete) | **DELETE** /campaigns/templates/{id} | Delete a campaign template
[**deleteCampaignUsingDELETE**](SWGCampaignsApi.md#deletecampaignusingdelete) | **DELETE** /campaigns/{id} | Delete a campaign
[**getCampaignTemplateUsingGET**](SWGCampaignsApi.md#getcampaigntemplateusingget) | **GET** /campaigns/templates/{id} | Get a single campaign template
[**getCampaignTemplatesUsingGET**](SWGCampaignsApi.md#getcampaigntemplatesusingget) | **GET** /campaigns/templates | List and search campaign templates
[**getCampaignUsingGET**](SWGCampaignsApi.md#getcampaignusingget) | **GET** /campaigns/{id} | Returns a single campaign
[**getCampaignsUsingGET**](SWGCampaignsApi.md#getcampaignsusingget) | **GET** /campaigns | List and search campaigns
[**getChallengesUsingGET**](SWGCampaignsApi.md#getchallengesusingget) | **GET** /campaigns/{id}/challenges | List the challenges associated with a campaign
[**removeChallengeUsingDELETE**](SWGCampaignsApi.md#removechallengeusingdelete) | **DELETE** /campaigns/{campaign_id}/challenges/{id} | Remove a challenge from a campaign
[**updateCampaignTemplateUsingPUT**](SWGCampaignsApi.md#updatecampaigntemplateusingput) | **PUT** /campaigns/templates/{id} | Update an campaign template
[**updateCampaignUsingPUT**](SWGCampaignsApi.md#updatecampaignusingput) | **PUT** /campaigns/{id} | Update a campaign


# **addChallengesUsingPOST**
```objc
-(NSNumber*) addChallengesUsingPOSTWithId: (NSNumber*) _id
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a challenge to a campaign

### Example 
```objc

NSNumber* _id = @789; // The id of the campaign
NSNumber* challengeId = 789; // The id of the challenge (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Add a challenge to a campaign
[apiInstance addChallengesUsingPOSTWithId:_id
              challengeId:challengeId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->addChallengesUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The id of the campaign | 
 **challengeId** | **NSNumber***| The id of the challenge | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCampaignTemplateUsingPOST**
```objc
-(NSNumber*) createCampaignTemplateUsingPOSTWithCampaignTemplateResource: (SWGTemplateResource*) campaignTemplateResource
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Create a campaign template

Campaign Templates define a type of campaign and the properties they have

### Example 
```objc

SWGTemplateResource* campaignTemplateResource = [[SWGTemplateResource alloc] init]; // The campaign template resource object (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Create a campaign template
[apiInstance createCampaignTemplateUsingPOSTWithCampaignTemplateResource:campaignTemplateResource
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->createCampaignTemplateUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **campaignTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The campaign template resource object | [optional] 

### Return type

[**SWGTemplateResource***](SWGTemplateResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCampaignUsingPOST**
```objc
-(NSNumber*) createCampaignUsingPOSTWithCampaignResource: (SWGCampaignResource*) campaignResource
        completionHandler: (void (^)(SWGCampaignResource* output, NSError* error)) handler;
```

Create a campaign

### Example 
```objc

SWGCampaignResource* campaignResource = [[SWGCampaignResource alloc] init]; // The campaign resource object (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Create a campaign
[apiInstance createCampaignUsingPOSTWithCampaignResource:campaignResource
          completionHandler: ^(SWGCampaignResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->createCampaignUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **campaignResource** | [**SWGCampaignResource***](SWGCampaignResource*.md)| The campaign resource object | [optional] 

### Return type

[**SWGCampaignResource***](SWGCampaignResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCampaignTemplateUsingDELETE**
```objc
-(NSNumber*) deleteCampaignTemplateUsingDELETEWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a campaign template

If cascade = 'detach', it will force delete the template even if it's attached to other objects

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Delete a campaign template
[apiInstance deleteCampaignTemplateUsingDELETEWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->deleteCampaignTemplateUsingDELETE: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCampaignUsingDELETE**
```objc
-(NSNumber*) deleteCampaignUsingDELETEWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a campaign

### Example 
```objc

NSNumber* _id = @789; // The campaign id

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Delete a campaign
[apiInstance deleteCampaignUsingDELETEWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->deleteCampaignUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignTemplateUsingGET**
```objc
-(NSNumber*) getCampaignTemplateUsingGETWithId: (NSString*) _id
        completionHandler: (void (^)(SWGTemplateResource* output, NSError* error)) handler;
```

Get a single campaign template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Get a single campaign template
[apiInstance getCampaignTemplateUsingGETWithId:_id
          completionHandler: ^(SWGTemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->getCampaignTemplateUsingGET: %@", error);
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

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignTemplatesUsingGET**
```objc
-(NSNumber*) getCampaignTemplatesUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageTemplateResource_* output, NSError* error)) handler;
```

List and search campaign templates

### Example 
```objc

NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// List and search campaign templates
[apiInstance getCampaignTemplatesUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(SWGPageTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->getCampaignTemplatesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| a comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageTemplateResource_***](SWGPageTemplateResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignUsingGET**
```objc
-(NSNumber*) getCampaignUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGCampaignResource* output, NSError* error)) handler;
```

Returns a single campaign

### Example 
```objc

NSNumber* _id = @789; // The campaign id

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Returns a single campaign
[apiInstance getCampaignUsingGETWithId:_id
          completionHandler: ^(SWGCampaignResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->getCampaignUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 

### Return type

[**SWGCampaignResource***](SWGCampaignResource.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignsUsingGET**
```objc
-(NSNumber*) getCampaignsUsingGETWithFilterActive: (NSNumber*) filterActive
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(SWGPageCampaignResource_* output, NSError* error)) handler;
```

List and search campaigns

### Example 
```objc

NSNumber* filterActive = @true; // Filter for campaigns that are active (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// List and search campaigns
[apiInstance getCampaignsUsingGETWithFilterActive:filterActive
              size:size
              page:page
              order:order
          completionHandler: ^(SWGPageCampaignResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->getCampaignsUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterActive** | **NSNumber***| Filter for campaigns that are active | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**SWGPageCampaignResource_***](SWGPageCampaignResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getChallengesUsingGET**
```objc
-(NSNumber*) getChallengesUsingGETWithId: (NSNumber*) _id
        completionHandler: (void (^)(SWGPageChallengeResource_* output, NSError* error)) handler;
```

List the challenges associated with a campaign

### Example 
```objc

NSNumber* _id = @789; // The campaign id

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// List the challenges associated with a campaign
[apiInstance getChallengesUsingGETWithId:_id
          completionHandler: ^(SWGPageChallengeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->getChallengesUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 

### Return type

[**SWGPageChallengeResource_***](SWGPageChallengeResource_.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeChallengeUsingDELETE**
```objc
-(NSNumber*) removeChallengeUsingDELETEWithCampaignId: (NSNumber*) campaignId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a challenge from a campaign

### Example 
```objc

NSNumber* campaignId = @789; // The campaign id
NSNumber* _id = @789; // The challenge id

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Remove a challenge from a campaign
[apiInstance removeChallengeUsingDELETEWithCampaignId:campaignId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->removeChallengeUsingDELETE: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **campaignId** | **NSNumber***| The campaign id | 
 **_id** | **NSNumber***| The challenge id | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCampaignTemplateUsingPUT**
```objc
-(NSNumber*) updateCampaignTemplateUsingPUTWithId: (NSString*) _id
    campaignTemplateResource: (SWGTemplateResource*) campaignTemplateResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update an campaign template

### Example 
```objc

NSString* _id = @"_id_example"; // The id of the template
SWGTemplateResource* campaignTemplateResource = [[SWGTemplateResource alloc] init]; // The campaign template resource object (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Update an campaign template
[apiInstance updateCampaignTemplateUsingPUTWithId:_id
              campaignTemplateResource:campaignTemplateResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->updateCampaignTemplateUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **campaignTemplateResource** | [**SWGTemplateResource***](SWGTemplateResource*.md)| The campaign template resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCampaignUsingPUT**
```objc
-(NSNumber*) updateCampaignUsingPUTWithId: (NSNumber*) _id
    campaignResource: (SWGCampaignResource*) campaignResource
        completionHandler: (void (^)(NSError* error)) handler;
```

Update a campaign

### Example 
```objc

NSNumber* _id = @789; // The campaign id
SWGCampaignResource* campaignResource = [[SWGCampaignResource alloc] init]; // The campaign resource object (optional)

SWGCampaignsApi*apiInstance = [[SWGCampaignsApi alloc] init];

// Update a campaign
[apiInstance updateCampaignUsingPUTWithId:_id
              campaignResource:campaignResource
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCampaignsApi->updateCampaignUsingPUT: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 
 **campaignResource** | [**SWGCampaignResource***](SWGCampaignResource*.md)| The campaign resource object | [optional] 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

