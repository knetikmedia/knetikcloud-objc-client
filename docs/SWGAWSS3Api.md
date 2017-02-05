# SWGAWSS3Api

All URIs are relative to *https://integration.knetikcloud.com/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**preSignUrlUsingGET**](SWGAWSS3Api.md#presignurlusingget) | **GET** /amazon/s3/signedposturl | Get a signed S3 URL


# **preSignUrlUsingGET**
```objc
-(NSURLSessionTask*) preSignUrlUsingGETWithFilename: (NSString*) filename
    contentType: (NSString*) contentType
        completionHandler: (void (^)(SWGAmazonS3Activity* output, NSError* error)) handler;
```

Get a signed S3 URL

Requires the file name and file content type (i.e., 'video/mpeg')

### Example 
```objc
SWGDefaultConfiguration *apiConfig = [SWGDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: knetik_oauth)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filename = @"filename_example"; // The file name (optional)
NSString* contentType = @"contentType_example"; // The content type (optional)

SWGAWSS3Api*apiInstance = [[SWGAWSS3Api alloc] init];

// Get a signed S3 URL
[apiInstance preSignUrlUsingGETWithFilename:filename
              contentType:contentType
          completionHandler: ^(SWGAmazonS3Activity* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGAWSS3Api->preSignUrlUsingGET: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filename** | **NSString***| The file name | [optional] 
 **contentType** | **NSString***| The content type | [optional] 

### Return type

[**SWGAmazonS3Activity***](SWGAmazonS3Activity.md)

### Authorization

[knetik_oauth](../README.md#knetik_oauth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

