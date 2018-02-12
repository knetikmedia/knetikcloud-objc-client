#import "JSAPITaxesApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPICountryTaxResource.h"
#import "JSAPIPageResourceCountryTaxResource_.h"
#import "JSAPIPageResourceStateTaxResource_.h"
#import "JSAPIResult.h"
#import "JSAPIStateTaxResource.h"


@interface JSAPITaxesApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPITaxesApi

NSString* kJSAPITaxesApiErrorDomain = @"JSAPITaxesApiErrorDomain";
NSInteger kJSAPITaxesApiMissingParamErrorCode = 234513;

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
/// Create a country tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param taxResource The tax object (optional)
///
///  @returns JSAPICountryTaxResource*
///
-(NSURLSessionTask*) createCountryTaxWithTaxResource: (JSAPICountryTaxResource*) taxResource
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries"];

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
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = taxResource;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPICountryTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPICountryTaxResource*)data, error);
                                }
                            }];
}

///
/// Create a state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param taxResource The tax object (optional)
///
///  @returns JSAPIStateTaxResource*
///
-(NSURLSessionTask*) createStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPIStateTaxResource*) taxResource
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}/states"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
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
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = taxResource;

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIStateTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIStateTaxResource*)data, error);
                                }
                            }];
}

///
/// Delete an existing tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @returns void
///
-(NSURLSessionTask*) deleteCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: nil
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler(error);
                                }
                            }];
}

///
/// Delete an existing state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param stateCode The code of the state 
///
///  @returns void
///
-(NSURLSessionTask*) deleteStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    // verify the required parameter 'stateCode' is set
    if (stateCode == nil) {
        NSParameterAssert(stateCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"stateCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}/states/{state_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
    }
    if (stateCode != nil) {
        pathParams[@"state_code"] = stateCode;
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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"DELETE"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: nil
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler(error);
                                }
                            }];
}

///
/// Get a single tax
/// <b>Permissions Needed:</b> ANY
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @returns JSAPICountryTaxResource*
///
-(NSURLSessionTask*) getCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
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
                              responseType: @"JSAPICountryTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPICountryTaxResource*)data, error);
                                }
                            }];
}

///
/// List and search taxes
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)
///
///  @returns JSAPIPageResourceCountryTaxResource_*
///
-(NSURLSessionTask*) getCountryTaxesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceCountryTaxResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries"];

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
                              responseType: @"JSAPIPageResourceCountryTaxResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceCountryTaxResource_*)data, error);
                                }
                            }];
}

///
/// Get a single state tax
/// <b>Permissions Needed:</b> ANY
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param stateCode The code of the state 
///
///  @returns JSAPIStateTaxResource*
///
-(NSURLSessionTask*) getStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'stateCode' is set
    if (stateCode == nil) {
        NSParameterAssert(stateCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"stateCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}/states/{state_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
    }
    if (stateCode != nil) {
        pathParams[@"state_code"] = stateCode;
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
                              responseType: @"JSAPIStateTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIStateTaxResource*)data, error);
                                }
                            }];
}

///
/// List and search taxes across all countries
/// <b>Permissions Needed:</b> ANY
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
///
///  @returns JSAPIPageResourceStateTaxResource_*
///
-(NSURLSessionTask*) getStateTaxesForCountriesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/states"];

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
                              responseType: @"JSAPIPageResourceStateTaxResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceStateTaxResource_*)data, error);
                                }
                            }];
}

///
/// List and search taxes within a country
/// <b>Permissions Needed:</b> ANY
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional)
///
///  @returns JSAPIPageResourceStateTaxResource_*
///
-(NSURLSessionTask*) getStateTaxesForCountryWithCountryCodeIso3: (NSString*) countryCodeIso3
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceStateTaxResource_* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}/states"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
    }

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
                              responseType: @"JSAPIPageResourceStateTaxResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceStateTaxResource_*)data, error);
                                }
                            }];
}

///
/// Create or update a tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param taxResource The tax object (optional)
///
///  @returns JSAPICountryTaxResource*
///
-(NSURLSessionTask*) updateCountryTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    taxResource: (JSAPICountryTaxResource*) taxResource
    completionHandler: (void (^)(JSAPICountryTaxResource* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
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
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = taxResource;

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
                              responseType: @"JSAPICountryTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPICountryTaxResource*)data, error);
                                }
                            }];
}

///
/// Create or update a state tax
/// <b>Permissions Needed:</b> TAX_ADMIN
///  @param countryCodeIso3 The iso3 code of the country 
///
///  @param stateCode The code of the state 
///
///  @param taxResource The tax object (optional)
///
///  @returns JSAPIStateTaxResource*
///
-(NSURLSessionTask*) updateStateTaxWithCountryCodeIso3: (NSString*) countryCodeIso3
    stateCode: (NSString*) stateCode
    taxResource: (JSAPIStateTaxResource*) taxResource
    completionHandler: (void (^)(JSAPIStateTaxResource* output, NSError* error)) handler {
    // verify the required parameter 'countryCodeIso3' is set
    if (countryCodeIso3 == nil) {
        NSParameterAssert(countryCodeIso3);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"countryCodeIso3"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'stateCode' is set
    if (stateCode == nil) {
        NSParameterAssert(stateCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"stateCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPITaxesApiErrorDomain code:kJSAPITaxesApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/tax/countries/{country_code_iso3}/states/{state_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (countryCodeIso3 != nil) {
        pathParams[@"country_code_iso3"] = countryCodeIso3;
    }
    if (stateCode != nil) {
        pathParams[@"state_code"] = stateCode;
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
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    bodyParam = taxResource;

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
                              responseType: @"JSAPIStateTaxResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIStateTaxResource*)data, error);
                                }
                            }];
}



@end
