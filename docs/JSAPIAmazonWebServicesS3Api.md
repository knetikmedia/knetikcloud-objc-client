# JSAPIAmazonWebServicesS3Api

All URIs are relative to *https://sandbox.knetikcloud.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getSignedS3URL**](JSAPIAmazonWebServicesS3Api.md#getsigneds3url) | **GET** /amazon/s3/signedposturl | Get a signed S3 URL


# **getSignedS3URL**
```objc
-(NSURLSessionTask*) getSignedS3URLWithFilename: (NSString*) filename
    contentType: (NSString*) contentType
        completionHandler: (void (^)(JSAPIAmazonS3Activity* output, NSError* error)) handler;
```

Get a signed S3 URL

Requires the file name and file content type (i.e., 'video/mpeg')

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filename = @"filename_example"; // The file name (optional)
NSString* contentType = @"contentType_example"; // The content type (optional)

JSAPIAmazonWebServicesS3Api*apiInstance = [[JSAPIAmazonWebServicesS3Api alloc] init];

// Get a signed S3 URL
[apiInstance getSignedS3URLWithFilename:filename
              contentType:contentType
          completionHandler: ^(JSAPIAmazonS3Activity* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAmazonWebServicesS3Api->getSignedS3URL: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filename** | **NSString***| The file name | [optional] 
 **contentType** | **NSString***| The content type | [optional] 

### Return type

[**JSAPIAmazonS3Activity***](JSAPIAmazonS3Activity.md)

### Authorization

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

