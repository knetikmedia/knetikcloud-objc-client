# JSAPIUtilBatchApi

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getBatch**](JSAPIUtilBatchApi.md#getbatch) | **GET** /batch/{token} | Get batch result with token
[**sendBatch**](JSAPIUtilBatchApi.md#sendbatch) | **POST** /batch | Request to run API call given the method, content type, path url, and body of request


# **getBatch**
```objc
-(NSURLSessionTask*) getBatchWithToken: (NSString*) token
        completionHandler: (void (^)(NSArray<JSAPIBatchReturn>* output, NSError* error)) handler;
```

Get batch result with token

Tokens expire in 24 hours. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* token = @"token_example"; // token

JSAPIUtilBatchApi*apiInstance = [[JSAPIUtilBatchApi alloc] init];

// Get batch result with token
[apiInstance getBatchWithToken:token
          completionHandler: ^(NSArray<JSAPIBatchReturn>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilBatchApi->getBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **token** | **NSString***| token | 

### Return type

[**NSArray<JSAPIBatchReturn>***](JSAPIBatchReturn.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **sendBatch**
```objc
-(NSURLSessionTask*) sendBatchWithBatch: (JSAPIBatch*) batch
        completionHandler: (void (^)(NSArray<JSAPIBatchReturn>* output, NSError* error)) handler;
```

Request to run API call given the method, content type, path url, and body of request

Should the request take longer than one of the alloted timeout parameters, a token will be returned instead, which can be used on the token endpoint in this service. <br><br><b>Permissions Needed:</b> ANY

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


JSAPIBatch* batch = [[JSAPIBatch alloc] init]; // The batch object (optional)

JSAPIUtilBatchApi*apiInstance = [[JSAPIUtilBatchApi alloc] init];

// Request to run API call given the method, content type, path url, and body of request
[apiInstance sendBatchWithBatch:batch
          completionHandler: ^(NSArray<JSAPIBatchReturn>* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIUtilBatchApi->sendBatch: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **batch** | [**JSAPIBatch***](JSAPIBatch.md)| The batch object | [optional] 

### Return type

[**NSArray<JSAPIBatchReturn>***](JSAPIBatchReturn.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

