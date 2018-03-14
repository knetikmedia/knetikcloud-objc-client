#import "JSAPIAuthClientsApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIClientResource.h"
#import "JSAPIGrantTypeResource.h"
#import "JSAPIPageResourceClientResource_.h"
#import "JSAPIResult.h"


@interface JSAPIAuthClientsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIAuthClientsApi

NSString* kJSAPIAuthClientsApiErrorDomain = @"JSAPIAuthClientsApiErrorDomain";
NSInteger kJSAPIAuthClientsApiMissingParamErrorCode = 234513;

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
/// Create a new client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientResource The client resource object (optional)
///
///  @returns JSAPIClientResource*
///
-(NSURLSessionTask*) createClientWithClientResource: (JSAPIClientResource*) clientResource
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients"];

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
    bodyParam = clientResource;

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
                              responseType: @"JSAPIClientResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIClientResource*)data, error);
                                }
                            }];
}

///
/// Delete a client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientKey The key of the client 
///
///  @returns void
///
-(NSURLSessionTask*) deleteClientWithClientKey: (NSString*) clientKey
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'clientKey' is set
    if (clientKey == nil) {
        NSParameterAssert(clientKey);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientKey"] };
            NSError* error = [NSError errorWithDomain:kJSAPIAuthClientsApiErrorDomain code:kJSAPIAuthClientsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/{client_key}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (clientKey != nil) {
        pathParams[@"client_key"] = clientKey;
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
/// Get a single client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientKey The key of the client 
///
///  @returns JSAPIClientResource*
///
-(NSURLSessionTask*) getClientWithClientKey: (NSString*) clientKey
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler {
    // verify the required parameter 'clientKey' is set
    if (clientKey == nil) {
        NSParameterAssert(clientKey);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientKey"] };
            NSError* error = [NSError errorWithDomain:kJSAPIAuthClientsApiErrorDomain code:kJSAPIAuthClientsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/{client_key}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (clientKey != nil) {
        pathParams[@"client_key"] = clientKey;
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
                              responseType: @"JSAPIClientResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIClientResource*)data, error);
                                }
                            }];
}

///
/// List available client grant types
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @returns NSArray<JSAPIGrantTypeResource>*
///
-(NSURLSessionTask*) getClientGrantTypesWithCompletionHandler: 
    (void (^)(NSArray<JSAPIGrantTypeResource>* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/grant-types"];

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
                              responseType: @"NSArray<JSAPIGrantTypeResource>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<JSAPIGrantTypeResource>*)data, error);
                                }
                            }];
}

///
/// List and search clients
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)
///
///  @returns JSAPIPageResourceClientResource_*
///
-(NSURLSessionTask*) getClientsWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceClientResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients"];

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
                              responseType: @"JSAPIPageResourceClientResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceClientResource_*)data, error);
                                }
                            }];
}

///
/// Set grant types for a client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientKey The key of the client 
///
///  @param grantList A list of unique grant types (optional)
///
///  @returns void
///
-(NSURLSessionTask*) setClientGrantTypesWithClientKey: (NSString*) clientKey
    grantList: (NSArray<NSString*>*) grantList
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'clientKey' is set
    if (clientKey == nil) {
        NSParameterAssert(clientKey);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientKey"] };
            NSError* error = [NSError errorWithDomain:kJSAPIAuthClientsApiErrorDomain code:kJSAPIAuthClientsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/{client_key}/grant-types"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (clientKey != nil) {
        pathParams[@"client_key"] = clientKey;
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
    bodyParam = grantList;

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
                              responseType: nil
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler(error);
                                }
                            }];
}

///
/// Set redirect uris for a client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientKey The key of the client 
///
///  @param redirectList A list of unique redirect uris (optional)
///
///  @returns void
///
-(NSURLSessionTask*) setClientRedirectUrisWithClientKey: (NSString*) clientKey
    redirectList: (NSArray<NSString*>*) redirectList
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'clientKey' is set
    if (clientKey == nil) {
        NSParameterAssert(clientKey);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientKey"] };
            NSError* error = [NSError errorWithDomain:kJSAPIAuthClientsApiErrorDomain code:kJSAPIAuthClientsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/{client_key}/redirect-uris"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (clientKey != nil) {
        pathParams[@"client_key"] = clientKey;
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
    bodyParam = redirectList;

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
                              responseType: nil
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler(error);
                                }
                            }];
}

///
/// Update a client
/// <b>Permissions Needed:</b> CLIENTS_ADMIN
///  @param clientKey The key of the client 
///
///  @param clientResource The client resource object (optional)
///
///  @returns JSAPIClientResource*
///
-(NSURLSessionTask*) updateClientWithClientKey: (NSString*) clientKey
    clientResource: (JSAPIClientResource*) clientResource
    completionHandler: (void (^)(JSAPIClientResource* output, NSError* error)) handler {
    // verify the required parameter 'clientKey' is set
    if (clientKey == nil) {
        NSParameterAssert(clientKey);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientKey"] };
            NSError* error = [NSError errorWithDomain:kJSAPIAuthClientsApiErrorDomain code:kJSAPIAuthClientsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/auth/clients/{client_key}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (clientKey != nil) {
        pathParams[@"client_key"] = clientKey;
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
    bodyParam = clientResource;

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
                              responseType: @"JSAPIClientResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIClientResource*)data, error);
                                }
                            }];
}



@end
