#import "JSAPIReportingRevenueApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIPageResourceRevenueCountryReportResource_.h"
#import "JSAPIPageResourceRevenueProductReportResource_.h"
#import "JSAPIResult.h"
#import "JSAPIRevenueReportResource.h"


@interface JSAPIReportingRevenueApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIReportingRevenueApi

NSString* kJSAPIReportingRevenueApiErrorDomain = @"JSAPIReportingRevenueApiErrorDomain";
NSInteger kJSAPIReportingRevenueApiMissingParamErrorCode = 234513;

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
/// Get item revenue info
/// Get basic info about revenue from sales of items and bundles (not subscriptions, shipping, etc), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  @returns JSAPIRevenueReportResource*
///
-(NSURLSessionTask*) getItemRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(JSAPIRevenueReportResource* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingRevenueApiErrorDomain code:kJSAPIReportingRevenueApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/revenue/item-sales/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

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
                              responseType: @"JSAPIRevenueReportResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIRevenueReportResource*)data, error);
                                }
                            }];
}

///
/// Get refund revenue info
/// Get basic info about revenue loss from refunds (for all item types), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
///  @param currencyCode The code for a currency to get refund data for 
///
///  @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  @returns JSAPIRevenueReportResource*
///
-(NSURLSessionTask*) getRefundRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(JSAPIRevenueReportResource* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingRevenueApiErrorDomain code:kJSAPIReportingRevenueApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/revenue/refunds/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

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
                              responseType: @"JSAPIRevenueReportResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIRevenueReportResource*)data, error);
                                }
                            }];
}

///
/// Get revenue info by country
/// Get basic info about revenue from sales of all types, summed up within a time range and split out by country. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceRevenueCountryReportResource_*
///
-(NSURLSessionTask*) getRevenueByCountryWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceRevenueCountryReportResource_* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingRevenueApiErrorDomain code:kJSAPIReportingRevenueApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/revenue/countries/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
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
                              responseType: @"JSAPIPageResourceRevenueCountryReportResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceRevenueCountryReportResource_*)data, error);
                                }
                            }];
}

///
/// Get revenue info by item
/// Get basic info about revenue from sales of all types, summed up within a time range and split out by specific item. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceRevenueProductReportResource_*
///
-(NSURLSessionTask*) getRevenueByItemWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceRevenueProductReportResource_* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingRevenueApiErrorDomain code:kJSAPIReportingRevenueApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/revenue/products/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
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
                              responseType: @"JSAPIPageResourceRevenueProductReportResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceRevenueProductReportResource_*)data, error);
                                }
                            }];
}

///
/// Get subscription revenue info
/// Get basic info about revenue from sales of new subscriptions as well as recurring payemnts, summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time (optional)
///
///  @returns JSAPIRevenueReportResource*
///
-(NSURLSessionTask*) getSubscriptionRevenueWithCurrencyCode: (NSString*) currencyCode
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    completionHandler: (void (^)(JSAPIRevenueReportResource* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingRevenueApiErrorDomain code:kJSAPIReportingRevenueApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/revenue/subscription-sales/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

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
                              responseType: @"JSAPIRevenueReportResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIRevenueReportResource*)data, error);
                                }
                            }];
}



@end
