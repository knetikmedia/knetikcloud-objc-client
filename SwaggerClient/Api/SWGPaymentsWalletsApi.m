#import "SWGPaymentsWalletsApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGPageResourceSimpleWallet_.h"
#import "SWGPageResourceWalletTotalResponse_.h"
#import "SWGPageResourceWalletTransactionResource_.h"
#import "SWGResult.h"
#import "SWGSimpleWallet.h"
#import "SWGWalletAlterRequest.h"
#import "SWGWalletTransactionResource.h"


@interface SWGPaymentsWalletsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation SWGPaymentsWalletsApi

NSString* kSWGPaymentsWalletsApiErrorDomain = @"SWGPaymentsWalletsApiErrorDomain";
NSInteger kSWGPaymentsWalletsApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[SWGApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(SWGApiClient *)apiClient {
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
/// Returns the user's wallet for the given currency code
/// 
///  @param userId The ID of the user for whom wallet is being retrieved 
///
///  @param currencyCode Currency code of the user's wallet 
///
///  @returns SWGSimpleWallet*
///
-(NSURLSessionTask*) getUserWalletWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    completionHandler: (void (^)(SWGSimpleWallet* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/wallets/{currency_code}"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"SWGSimpleWallet*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGSimpleWallet*)data, error);
                                }
                            }];
}

///
/// Retrieve a user's wallet transactions
/// 
///  @param userId The ID of the user for whom wallet transactions are being retrieved 
///
///  @param currencyCode Currency code of the user's wallet 
///
///  @param filterType Filter for transactions with specified type (optional)
///
///  @param filterMaxDate Filter for transactions from no earlier than the specified date as a unix timestamp in seconds (optional)
///
///  @param filterMinDate Filter for transactions from no later than the specified date as a unix timestamp in seconds (optional)
///
///  @param filterSign Filter for transactions with amount with the given sign.  Allowable values: ('positive', 'negative') (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)
///
///  @returns SWGPageResourceWalletTransactionResource_*
///
-(NSURLSessionTask*) getUserWalletTransactionsWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    filterType: (NSString*) filterType
    filterMaxDate: (NSNumber*) filterMaxDate
    filterMinDate: (NSNumber*) filterMinDate
    filterSign: (NSString*) filterSign
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceWalletTransactionResource_* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/wallets/{currency_code}/transactions"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterType != nil) {
        queryParams[@"filter_type"] = filterType;
    }
    if (filterMaxDate != nil) {
        queryParams[@"filter_max_date"] = filterMaxDate;
    }
    if (filterMinDate != nil) {
        queryParams[@"filter_min_date"] = filterMinDate;
    }
    if (filterSign != nil) {
        queryParams[@"filter_sign"] = filterSign;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    if (order != nil) {
        queryParams[@"order"] = order;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"SWGPageResourceWalletTransactionResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceWalletTransactionResource_*)data, error);
                                }
                            }];
}

///
/// List all of a user's wallets
/// 
///  @param userId The ID of the user for whom wallets are being retrieved 
///
///  @returns NSArray<SWGSimpleWallet>*
///
-(NSURLSessionTask*) getUserWalletsWithUserId: (NSNumber*) userId
    completionHandler: (void (^)(NSArray<SWGSimpleWallet>* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/wallets"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"NSArray<SWGSimpleWallet>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<SWGSimpleWallet>*)data, error);
                                }
                            }];
}

///
/// Retrieves a summation of wallet balances by currency code
/// 
///  @returns SWGPageResourceWalletTotalResponse_*
///
-(NSURLSessionTask*) getWalletBalancesWithCompletionHandler: 
    (void (^)(SWGPageResourceWalletTotalResponse_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/wallets/totals"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"SWGPageResourceWalletTotalResponse_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceWalletTotalResponse_*)data, error);
                                }
                            }];
}

///
/// Retrieve wallet transactions across the system
/// 
///  @param filterInvoice Filter for transactions from a specific invoice (optional)
///
///  @param filterType Filter for transactions with specified type (optional)
///
///  @param filterDate A comma separated string without spaces.  First value is the operator to search on, second value is the log start date, a unix timestamp in seconds. Can be repeated for a range, eg: GT,123,LT,456  Allowed operators: (GT, LT, EQ, GOE, LOE). (optional)
///
///  @param filterSign Filter for transactions with amount with the given sign (optional)
///
///  @param filterUserId Filter for transactions for specific userId (optional)
///
///  @param filterUsername Filter for transactions for specific username that start with the given string (optional)
///
///  @param filterDetails Filter for transactions for specific details that start with the given string (optional)
///
///  @param filterCurrencyCode Filter for transactions for specific currency code (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)
///
///  @returns SWGPageResourceWalletTransactionResource_*
///
-(NSURLSessionTask*) getWalletTransactionsWithFilterInvoice: (NSNumber*) filterInvoice
    filterType: (NSString*) filterType
    filterDate: (NSString*) filterDate
    filterSign: (NSString*) filterSign
    filterUserId: (NSNumber*) filterUserId
    filterUsername: (NSString*) filterUsername
    filterDetails: (NSString*) filterDetails
    filterCurrencyCode: (NSString*) filterCurrencyCode
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceWalletTransactionResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/wallets/transactions"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterInvoice != nil) {
        queryParams[@"filter_invoice"] = filterInvoice;
    }
    if (filterType != nil) {
        queryParams[@"filter_type"] = filterType;
    }
    if (filterDate != nil) {
        queryParams[@"filter_date"] = filterDate;
    }
    if (filterSign != nil) {
        queryParams[@"filter_sign"] = filterSign;
    }
    if (filterUserId != nil) {
        queryParams[@"filter_user_id"] = filterUserId;
    }
    if (filterUsername != nil) {
        queryParams[@"filter_username"] = filterUsername;
    }
    if (filterDetails != nil) {
        queryParams[@"filter_details"] = filterDetails;
    }
    if (filterCurrencyCode != nil) {
        queryParams[@"filter_currency_code"] = filterCurrencyCode;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    if (order != nil) {
        queryParams[@"order"] = order;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"SWGPageResourceWalletTransactionResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceWalletTransactionResource_*)data, error);
                                }
                            }];
}

///
/// Retrieve a list of wallets across the system
/// 
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)
///
///  @returns SWGPageResourceSimpleWallet_*
///
-(NSURLSessionTask*) getWalletsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(SWGPageResourceSimpleWallet_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/wallets"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    if (order != nil) {
        queryParams[@"order"] = order;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

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
                              responseType: @"SWGPageResourceSimpleWallet_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGPageResourceSimpleWallet_*)data, error);
                                }
                            }];
}

///
/// Updates the balance for a user's wallet
/// 
///  @param userId The ID of the user for whom wallet is being modified 
///
///  @param currencyCode Currency code of the user's wallet 
///
///  @param request The requested balance modification to be made to the user's wallet (optional)
///
///  @returns SWGWalletTransactionResource*
///
-(NSURLSessionTask*) updateWalletBalanceWithUserId: (NSNumber*) userId
    currencyCode: (NSString*) currencyCode
    request: (SWGWalletAlterRequest*) request
    completionHandler: (void (^)(SWGWalletTransactionResource* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kSWGPaymentsWalletsApiErrorDomain code:kSWGPaymentsWalletsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/wallets/{currency_code}/balance"];

    // remove format in URL if needed
    [resourcePath replaceOccurrencesOfString:@".{format}" withString:@".json" options:0 range:NSMakeRange(0,resourcePath.length)];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[@"OAuth2"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = request;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"PUT"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"SWGWalletTransactionResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGWalletTransactionResource*)data, error);
                                }
                            }];
}



@end
