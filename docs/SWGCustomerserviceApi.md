# SWGCustomerserviceApi

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**createCustomerUsingPOST**](SWGCustomerserviceApi.md#createcustomerusingpost) | **POST** /customers | Create a customer
[**getCustomersUsingGET**](SWGCustomerserviceApi.md#getcustomersusingget) | **GET** /customers | List and search customers


# **createCustomerUsingPOST**
```objc
-(NSNumber*) createCustomerUsingPOSTWithCustomer: (SWGCustomerConfig*) customer
        completionHandler: (void (^)(NSError* error)) handler;
```

Create a customer

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


SWGCustomerConfig* customer = [[SWGCustomerConfig alloc] init]; // customer

SWGCustomerserviceApi*apiInstance = [[SWGCustomerserviceApi alloc] init];

// Create a customer
[apiInstance createCustomerUsingPOSTWithCustomer:customer
          completionHandler: ^(NSError* error) {
                        if (error) {
                            NSLog(@"Error calling SWGCustomerserviceApi->createCustomerUsingPOST: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **customer** | [**SWGCustomerConfig***](SWGCustomerConfig*.md)| customer | 

### Return type

void (empty response body)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getCustomersUsingGET**
```objc
-(NSNumber*) getCustomersUsingGETWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
        completionHandler: (void (^)(NSArray<SWGCustomerResource>* output, NSError* error)) handler;
```

List and search customers

Get a list of customers with optional filtering

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSNumber* size = @25; // The number of objects returned per page (optional) (default to 25)
NSNumber* page = @1; // The number of the page returned, starting with 1 (optional) (default to 1)
NSString* order = @"1"; // A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional) (default to 1)

SWGCustomerserviceApi*apiInstance = [[SWGCustomerserviceApi alloc] init];

// List and search customers
[apiInstance getCustomersUsingGETWithSize:size
              page:page
              order:order
          completionHandler: ^(NSArray<SWGCustomerResource>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGCustomerserviceApi->getCustomersUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **size** | **NSNumber***| The number of objects returned per page | [optional] [default to 25]
 **page** | **NSNumber***| The number of the page returned, starting with 1 | [optional] [default to 1]
 **order** | **NSString***| A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] | [optional] [default to 1]

### Return type

[**NSArray<SWGCustomerResource>***](SWGCustomerResource.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

