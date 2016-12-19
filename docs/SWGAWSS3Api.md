# SWGAWSS3Api

All URIs are relative to *https://localhost:8080/*

Method | HTTP request | Description
------------- | ------------- | -------------
[**preSignUrlUsingGET**](SWGAWSS3Api.md#presignurlusingget) | **GET** /amazon/s3/signedposturl | Get a signed S3 URL


# **preSignUrlUsingGET**
```objc
-(NSNumber*) preSignUrlUsingGETWithFilename: (NSString*) filename
    contentType: (NSString*) contentType
        completionHandler: (void (^)(SWGAmazonS3Activity* output, NSError* error)) handler;
```

Get a signed S3 URL

Requires the file name and file content type (i.e., 'video/mpeg')

### Example 
```objc
SWGConfiguration *apiConfig = [SWGConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: OAuth2)
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

[OAuth2](../README.md#OAuth2)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: */*

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

