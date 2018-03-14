#import "JSAPIReportingUsageApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIPageResourceUsageInfo_.h"
#import "JSAPIResult.h"


@interface JSAPIReportingUsageApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIReportingUsageApi

NSString* kJSAPIReportingUsageApiErrorDomain = @"JSAPIReportingUsageApiErrorDomain";
NSInteger kJSAPIReportingUsageApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[JSAPIApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Returns aggregated endpoint usage information by day
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)
///
///  @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
///
///  @param url Filter for a certain endpoint.  Must include method as well to work (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUsageInfo_*
///
-(NSURLSessionTask*) getUsageByDayWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/day"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (combineEndpoints != nil) {
        queryParams[@"combine_endpoints"] = [combineEndpoints isEqual:@(YES)] ? @"true" : @"false";
    }
    if (method != nil) {
        queryParams[@"method"] = method;
    }
    if (url != nil) {
        queryParams[@"url"] = url;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceUsageInfo_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUsageInfo_*)data, error);
                                }
                            }];
}

///
/// Returns aggregated endpoint usage information by hour
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)
///
///  @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
///
///  @param url Filter for a certain endpoint.  Must include method as well to work (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUsageInfo_*
///
-(NSURLSessionTask*) getUsageByHourWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/hour"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (combineEndpoints != nil) {
        queryParams[@"combine_endpoints"] = [combineEndpoints isEqual:@(YES)] ? @"true" : @"false";
    }
    if (method != nil) {
        queryParams[@"method"] = method;
    }
    if (url != nil) {
        queryParams[@"url"] = url;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceUsageInfo_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUsageInfo_*)data, error);
                                }
                            }];
}

///
/// Returns aggregated endpoint usage information by minute
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)
///
///  @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
///
///  @param url Filter for a certain endpoint.  Must include method as well to work (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUsageInfo_*
///
-(NSURLSessionTask*) getUsageByMinuteWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/minute"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (combineEndpoints != nil) {
        queryParams[@"combine_endpoints"] = [combineEndpoints isEqual:@(YES)] ? @"true" : @"false";
    }
    if (method != nil) {
        queryParams[@"method"] = method;
    }
    if (url != nil) {
        queryParams[@"url"] = url;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceUsageInfo_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUsageInfo_*)data, error);
                                }
                            }];
}

///
/// Returns aggregated endpoint usage information by month
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object (optional, default to false)
///
///  @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
///
///  @param url Filter for a certain endpoint.  Must include method as well to work (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUsageInfo_*
///
-(NSURLSessionTask*) getUsageByMonthWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/month"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (combineEndpoints != nil) {
        queryParams[@"combine_endpoints"] = [combineEndpoints isEqual:@(YES)] ? @"true" : @"false";
    }
    if (method != nil) {
        queryParams[@"method"] = method;
    }
    if (url != nil) {
        queryParams[@"url"] = url;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceUsageInfo_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUsageInfo_*)data, error);
                                }
                            }];
}

///
/// Returns aggregated endpoint usage information by year
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @param combineEndpoints Whether to combine counts from different endpoints. Removes the url and method from the result object (optional, default to false)
///
///  @param method Filter for a certain endpoint method.  Must include url as well to work (optional)
///
///  @param url Filter for a certain endpoint.  Must include method as well to work (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUsageInfo_*
///
-(NSURLSessionTask*) getUsageByYearWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    combineEndpoints: (NSNumber*) combineEndpoints
    method: (NSString*) method
    url: (NSString*) url
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUsageInfo_* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/year"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (combineEndpoints != nil) {
        queryParams[@"combine_endpoints"] = [combineEndpoints isEqual:@(YES)] ? @"true" : @"false";
    }
    if (method != nil) {
        queryParams[@"method"] = method;
    }
    if (url != nil) {
        queryParams[@"url"] = url;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceUsageInfo_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUsageInfo_*)data, error);
                                }
                            }];
}

///
/// Returns list of endpoints called (method and url)
/// <b>Permissions Needed:</b> USAGE_ADMIN
///  @param startDate The beginning of the range being requested, unix timestamp in seconds 
///
///  @param endDate The ending of the range being requested, unix timestamp in seconds 
///
///  @returns NSArray<NSString*>*
///
-(NSURLSessionTask*) getUsageEndpointsWithStartDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(NSArray<NSString*>* output, NSError* error)) handler {
    // verify the required parameter 'startDate' is set
    if (startDate == nil) {
        NSParameterAssert(startDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"startDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'endDate' is set
    if (endDate == nil) {
        NSParameterAssert(endDate);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"endDate"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingUsageApiErrorDomain code:kJSAPIReportingUsageApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/usage/endpoints"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"NSArray<NSString*>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<NSString*>*)data, error);
                                }
                            }];
}



@end
