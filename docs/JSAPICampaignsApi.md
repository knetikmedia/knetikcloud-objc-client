# JSAPICampaignsApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**addChallengeToCampaign**](JSAPICampaignsApi.md#addchallengetocampaign) | **POST** /campaigns/{id}/challenges | Add a challenge to a campaign
[**createCampaign**](JSAPICampaignsApi.md#createcampaign) | **POST** /campaigns | Create a campaign
[**createCampaignTemplate**](JSAPICampaignsApi.md#createcampaigntemplate) | **POST** /campaigns/templates | Create a campaign template
[**deleteCampaign**](JSAPICampaignsApi.md#deletecampaign) | **DELETE** /campaigns/{id} | Delete a campaign
[**deleteCampaignTemplate**](JSAPICampaignsApi.md#deletecampaigntemplate) | **DELETE** /campaigns/templates/{id} | Delete a campaign template
[**getCampaign**](JSAPICampaignsApi.md#getcampaign) | **GET** /campaigns/{id} | Returns a single campaign
[**getCampaignChallenges**](JSAPICampaignsApi.md#getcampaignchallenges) | **GET** /campaigns/{id}/challenges | List the challenges associated with a campaign
[**getCampaignTemplate**](JSAPICampaignsApi.md#getcampaigntemplate) | **GET** /campaigns/templates/{id} | Get a single campaign template
[**getCampaignTemplates**](JSAPICampaignsApi.md#getcampaigntemplates) | **GET** /campaigns/templates | List and search campaign templates
[**getCampaigns**](JSAPICampaignsApi.md#getcampaigns) | **GET** /campaigns | List and search campaigns
[**removeChallengeFromCampaign**](JSAPICampaignsApi.md#removechallengefromcampaign) | **DELETE** /campaigns/{campaign_id}/challenges/{id} | Remove a challenge from a campaign
[**updateCampaign**](JSAPICampaignsApi.md#updatecampaign) | **PUT** /campaigns/{id} | Update a campaign
[**updateCampaignTemplate**](JSAPICampaignsApi.md#updatecampaigntemplate) | **PUT** /campaigns/templates/{id} | Update an campaign template


# **addChallengeToCampaign**
```objc
-(NSURLSessionTask*) addChallengeToCampaignWithId: (NSNumber*) _id
    challengeId: (NSNumber*) challengeId
        completionHandler: (void (^)(NSError* error)) handler;
```

Add a challenge to a campaign

<b>Permissions Needed:</b> CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The id of the campaign
NSNumber* challengeId = 789; // The id of the challenge (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Add a challenge to a campaign
[apiInstance addChallengeToCampaignWithId:_id
              challengeId:challengeId
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->addChallengeToCampaign: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCampaign**
```objc
-(NSURLSessionTask*) createCampaignWithCampaignResource: (JSAPICampaignResource*) campaignResource
        completionHandler: (void (^)(JSAPICampaignResource* output, NSError* error)) handler;
```

Create a campaign

<b>Permissions Needed:</b> CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPICampaignResource* campaignResource = [[JSAPICampaignResource alloc] init]; // The campaign resource object (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Create a campaign
[apiInstance createCampaignWithCampaignResource:campaignResource
          completionHandler: ^(JSAPICampaignResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->createCampaign: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **campaignResource** | [**JSAPICampaignResource***](JSAPICampaignResource.md)| The campaign resource object | [optional] 

### Return type

[**JSAPICampaignResource***](JSAPICampaignResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **createCampaignTemplate**
```objc
-(NSURLSessionTask*) createCampaignTemplateWithCampaignTemplateResource: (JSAPITemplateResource*) campaignTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Create a campaign template

Campaign Templates define a type of campaign and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPITemplateResource* campaignTemplateResource = [[JSAPITemplateResource alloc] init]; // The campaign template resource object (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Create a campaign template
[apiInstance createCampaignTemplateWithCampaignTemplateResource:campaignTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->createCampaignTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **campaignTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The campaign template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCampaign**
```objc
-(NSURLSessionTask*) deleteCampaignWithId: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a campaign

<b>Permissions Needed:</b> CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The campaign id

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Delete a campaign
[apiInstance deleteCampaignWithId:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->deleteCampaign: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **deleteCampaignTemplate**
```objc
-(NSURLSessionTask*) deleteCampaignTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
        completionHandler: (void (^)(NSError* error)) handler;
```

Delete a campaign template

If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
NSString* cascade = @"cascade_example"; // The value needed to delete used templates (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Delete a campaign template
[apiInstance deleteCampaignTemplateWithId:_id
              cascade:cascade
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->deleteCampaignTemplate: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaign**
```objc
-(NSURLSessionTask*) getCampaignWithId: (NSNumber*) _id
        completionHandler: (void (^)(JSAPICampaignResource* output, NSError* error)) handler;
```

Returns a single campaign

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The campaign id

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Returns a single campaign
[apiInstance getCampaignWithId:_id
          completionHandler: ^(JSAPICampaignResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->getCampaign: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 

### Return type

[**JSAPICampaignResource***](JSAPICampaignResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignChallenges**
```objc
-(NSURLSessionTask*) getCampaignChallengesWithId: (NSNumber*) _id
    filterStartDate: (NSString*) filterStartDate
    filterEndDate: (NSString*) filterEndDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceChallengeResource_* output, NSError* error)) handler;
```

List the challenges associated with a campaign

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The campaign id
NSString* filterStartDate = @"filterStartDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSString* filterEndDate = @"filterEndDate_example"; // A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// List the challenges associated with a campaign
[apiInstance getCampaignChallengesWithId:_id
              filterStartDate:filterStartDate
              filterEndDate:filterEndDate
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceChallengeResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->getCampaignChallenges: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 
 **filterStartDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the challenge start date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **filterEndDate** | **NSString***| A comma separated string without spaces.  First value is the operator to search on, second value is the challenge end date, a unix timestamp in seconds.  Allowed operators: (GT, LT, EQ, GOE, LOE). | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceChallengeResource_***](JSAPIPageResourceChallengeResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignTemplate**
```objc
-(NSURLSessionTask*) getCampaignTemplateWithId: (NSString*) _id
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Get a single campaign template

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Get a single campaign template
[apiInstance getCampaignTemplateWithId:_id
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->getCampaignTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaignTemplates**
```objc
-(NSURLSessionTask*) getCampaignTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler;
```

List and search campaign templates

<b>Permissions Needed:</b> TEMPLATE_ADMIN or CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// List and search campaign templates
[apiInstance getCampaignTemplatesWithSize:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceTemplateResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->getCampaignTemplates: %@", error);
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

[**JSAPIPageResourceTemplateResource_***](JSAPIPageResourceTemplateResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCampaigns**
```objc
-(NSURLSessionTask*) getCampaignsWithFilterActive: (NSNumber*) filterActive
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(JSAPIPageResourceCampaignResource_* output, NSError* error)) handler;
```

List and search campaigns

<b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* filterActive = @true; // Filter for campaigns that are active (optional)
NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"id:ASC"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to id:ASC)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// List and search campaigns
[apiInstance getCampaignsWithFilterActive:filterActive
              size:size
              page:page
              order:order
          completionHandler: ^(JSAPIPageResourceCampaignResource_* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->getCampaigns: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filterActive** | **NSNumber***| Filter for campaigns that are active | [optional] 
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to id:ASC]

### Return type

[**JSAPIPageResourceCampaignResource_***](JSAPIPageResourceCampaignResource_.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **removeChallengeFromCampaign**
```objc
-(NSURLSessionTask*) removeChallengeFromCampaignWithCampaignId: (NSNumber*) campaignId
    _id: (NSNumber*) _id
        completionHandler: (void (^)(NSError* error)) handler;
```

Remove a challenge from a campaign

<b>Permissions Needed:</b> CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* campaignId = @789; // The campaign id
NSNumber* _id = @789; // The challenge id

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Remove a challenge from a campaign
[apiInstance removeChallengeFromCampaignWithCampaignId:campaignId
              _id:_id
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->removeChallengeFromCampaign: %@", error);
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

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCampaign**
```objc
-(NSURLSessionTask*) updateCampaignWithId: (NSNumber*) _id
    campaignResource: (JSAPICampaignResource*) campaignResource
        completionHandler: (void (^)(JSAPICampaignResource* output, NSError* error)) handler;
```

Update a campaign

<b>Permissions Needed:</b> CAMPAIGNS_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* _id = @789; // The campaign id
JSAPICampaignResource* campaignResource = [[JSAPICampaignResource alloc] init]; // The campaign resource object (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Update a campaign
[apiInstance updateCampaignWithId:_id
              campaignResource:campaignResource
          completionHandler: ^(JSAPICampaignResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->updateCampaign: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSNumber***| The campaign id | 
 **campaignResource** | [**JSAPICampaignResource***](JSAPICampaignResource.md)| The campaign resource object | [optional] 

### Return type

[**JSAPICampaignResource***](JSAPICampaignResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **updateCampaignTemplate**
```objc
-(NSURLSessionTask*) updateCampaignTemplateWithId: (NSString*) _id
    campaignTemplateResource: (JSAPITemplateResource*) campaignTemplateResource
        completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler;
```

Update an campaign template

<b>Permissions Needed:</b> TEMPLATE_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* _id = @"_id_example"; // The id of the template
JSAPITemplateResource* campaignTemplateResource = [[JSAPITemplateResource alloc] init]; // The campaign template resource object (optional)

JSAPICampaignsApi*apiInstance = [[JSAPICampaignsApi alloc] init];

// Update an campaign template
[apiInstance updateCampaignTemplateWithId:_id
              campaignTemplateResource:campaignTemplateResource
          completionHandler: ^(JSAPITemplateResource* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPICampaignsApi->updateCampaignTemplate: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_id** | **NSString***| The id of the template | 
 **campaignTemplateResource** | [**JSAPITemplateResource***](JSAPITemplateResource.md)| The campaign template resource object | [optional] 

### Return type

[**JSAPITemplateResource***](JSAPITemplateResource.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

