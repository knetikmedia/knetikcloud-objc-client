#import "JSAPIGamificationAchievementsApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIAchievementDefinitionResource.h"
#import "JSAPIBreTriggerResource.h"
#import "JSAPIIntWrapper.h"
#import "JSAPIPageResourceAchievementDefinitionResource_.h"
#import "JSAPIPageResourceTemplateResource_.h"
#import "JSAPIPageResourceUserAchievementGroupResource_.h"
#import "JSAPIResult.h"
#import "JSAPITemplateResource.h"
#import "JSAPIUserAchievementGroupResource.h"


@interface JSAPIGamificationAchievementsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIGamificationAchievementsApi

NSString* kJSAPIGamificationAchievementsApiErrorDomain = @"JSAPIGamificationAchievementsApiErrorDomain";
NSInteger kJSAPIGamificationAchievementsApiMissingParamErrorCode = 234513;

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
/// Create a new achievement definition
/// If the definition contains a trigger event name, a BRE rule is created, so that tracking logic is executed when the triggering event occurs. If no trigger event name is specified, the user's achievement status must manually be updated via the API. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param achievement The achievement definition (optional)
///
///  @returns JSAPIAchievementDefinitionResource*
///
-(NSURLSessionTask*) createAchievementWithAchievement: (JSAPIAchievementDefinitionResource*) achievement
    completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements"];

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
    bodyParam = achievement;

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
                              responseType: @"JSAPIAchievementDefinitionResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIAchievementDefinitionResource*)data, error);
                                }
                            }];
}

///
/// Create an achievement template
/// Achievement templates define a type of achievement and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///  @param template The achievement template to be created (optional)
///
///  @returns JSAPITemplateResource*
///
-(NSURLSessionTask*) createAchievementTemplateWithTemplate: (JSAPITemplateResource*) template
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/templates"];

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
    bodyParam = template;

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
                              responseType: @"JSAPITemplateResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPITemplateResource*)data, error);
                                }
                            }];
}

///
/// Delete an achievement definition
/// Will also disable the associated generated rule, if any. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param name The name of the achievement 
///
///  @returns void
///
-(NSURLSessionTask*) deleteAchievementWithName: (NSString*) name
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter 'name' is set
    if (name == nil) {
        NSParameterAssert(name);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"name"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/{name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (name != nil) {
        pathParams[@"name"] = name;
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
/// Delete an achievement template
/// If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
///  @param _id The id of the template 
///
///  @param cascade The value needed to delete used templates (optional)
///
///  @returns void
///
-(NSURLSessionTask*) deleteAchievementTemplateWithId: (NSString*) _id
    cascade: (NSString*) cascade
    completionHandler: (void (^)(NSError* error)) handler {
    // verify the required parameter '_id' is set
    if (_id == nil) {
        NSParameterAssert(_id);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"_id"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/templates/{id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (_id != nil) {
        pathParams[@"id"] = _id;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (cascade != nil) {
        queryParams[@"cascade"] = cascade;
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
/// Get a single achievement definition
/// <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
///  @param name The name of the achievement 
///
///  @returns JSAPIAchievementDefinitionResource*
///
-(NSURLSessionTask*) getAchievementWithName: (NSString*) name
    completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler {
    // verify the required parameter 'name' is set
    if (name == nil) {
        NSParameterAssert(name);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"name"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/{name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (name != nil) {
        pathParams[@"name"] = name;
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
                              responseType: @"JSAPIAchievementDefinitionResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIAchievementDefinitionResource*)data, error);
                                }
                            }];
}

///
/// Get a single achievement template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
///  @param _id The id of the template 
///
///  @returns JSAPITemplateResource*
///
-(NSURLSessionTask*) getAchievementTemplateWithId: (NSString*) _id
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler {
    // verify the required parameter '_id' is set
    if (_id == nil) {
        NSParameterAssert(_id);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"_id"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/templates/{id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (_id != nil) {
        pathParams[@"id"] = _id;
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
                              responseType: @"JSAPITemplateResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPITemplateResource*)data, error);
                                }
                            }];
}

///
/// List and search achievement templates
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN or ACHIEVEMENTS_ADMIN
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to id:ASC)
///
///  @returns JSAPIPageResourceTemplateResource_*
///
-(NSURLSessionTask*) getAchievementTemplatesWithSize: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    completionHandler: (void (^)(JSAPIPageResourceTemplateResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/templates"];

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
                              responseType: @"JSAPIPageResourceTemplateResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceTemplateResource_*)data, error);
                                }
                            }];
}

///
/// Get the list of triggers that can be used to trigger an achievement progress update
/// <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @returns NSArray<JSAPIBreTriggerResource>*
///
-(NSURLSessionTask*) getAchievementTriggersWithCompletionHandler: 
    (void (^)(NSArray<JSAPIBreTriggerResource>* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/triggers"];

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
                              responseType: @"NSArray<JSAPIBreTriggerResource>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<JSAPIBreTriggerResource>*)data, error);
                                }
                            }];
}

///
/// Get all achievement definitions in the system
/// <b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN or ACHIEVEMENTS_USER
///  @param filterTagset Filter for achievements with specified tags (separated by comma) (optional)
///
///  @param filterName Filter for achievements whose name contains a string (optional)
///
///  @param filterHidden Filter for achievements that are hidden or not (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to name:ASC)
///
///  @param filterDerived Filter for achievements that are derived from other services (optional, default to false)
///
///  @returns JSAPIPageResourceAchievementDefinitionResource_*
///
-(NSURLSessionTask*) getAchievementsWithFilterTagset: (NSString*) filterTagset
    filterName: (NSString*) filterName
    filterHidden: (NSNumber*) filterHidden
    size: (NSNumber*) size
    page: (NSNumber*) page
    order: (NSString*) order
    filterDerived: (NSNumber*) filterDerived
    completionHandler: (void (^)(JSAPIPageResourceAchievementDefinitionResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterTagset != nil) {
        queryParams[@"filter_tagset"] = filterTagset;
    }
    if (filterName != nil) {
        queryParams[@"filter_name"] = filterName;
    }
    if (filterHidden != nil) {
        queryParams[@"filter_hidden"] = [filterHidden isEqual:@(YES)] ? @"true" : @"false";
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
    if (filterDerived != nil) {
        queryParams[@"filter_derived"] = [filterDerived isEqual:@(YES)] ? @"true" : @"false";
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
                              responseType: @"JSAPIPageResourceAchievementDefinitionResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceAchievementDefinitionResource_*)data, error);
                                }
                            }];
}

///
/// Get a list of derived achievements
/// Used by other services that depend on achievements.  <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param name The name of the derived achievement 
///
///  @returns NSArray<JSAPIAchievementDefinitionResource>*
///
-(NSURLSessionTask*) getDerivedAchievementsWithName: (NSString*) name
    completionHandler: (void (^)(NSArray<JSAPIAchievementDefinitionResource>* output, NSError* error)) handler {
    // verify the required parameter 'name' is set
    if (name == nil) {
        NSParameterAssert(name);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"name"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/derived/{name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (name != nil) {
        pathParams[@"name"] = name;
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
                              responseType: @"NSArray<JSAPIAchievementDefinitionResource>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<JSAPIAchievementDefinitionResource>*)data, error);
                                }
                            }];
}

///
/// Retrieve progress on a given achievement for a given user
/// Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param userId The user's id 
///
///  @param achievementName The achievement's name 
///
///  @returns JSAPIUserAchievementGroupResource*
///
-(NSURLSessionTask*) getUserAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'achievementName' is set
    if (achievementName == nil) {
        NSParameterAssert(achievementName);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"achievementName"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/achievements/{achievement_name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (achievementName != nil) {
        pathParams[@"achievement_name"] = achievementName;
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
                              responseType: @"JSAPIUserAchievementGroupResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIUserAchievementGroupResource*)data, error);
                                }
                            }];
}

///
/// Retrieve progress on achievements for a given user
/// Assets will not be filled in on the resources returned. Use 'Get a single poll' to retrieve the full resource with assets for a given item as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param userId The user's id 
///
///  @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
///
///  @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
///
///  @param filterAchievementName Filter for achievements whose name contains a string (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUserAchievementGroupResource_*
///
-(NSURLSessionTask*) getUserAchievementsProgressWithUserId: (NSNumber*) userId
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/achievements"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterAchievementDerived != nil) {
        queryParams[@"filter_achievement_derived"] = [filterAchievementDerived isEqual:@(YES)] ? @"true" : @"false";
    }
    if (filterAchievementTagset != nil) {
        queryParams[@"filter_achievement_tagset"] = filterAchievementTagset;
    }
    if (filterAchievementName != nil) {
        queryParams[@"filter_achievement_name"] = filterAchievementName;
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
                              responseType: @"JSAPIPageResourceUserAchievementGroupResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUserAchievementGroupResource_*)data, error);
                                }
                            }];
}

///
/// Retrieve progress on a given achievement for all users
/// Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param achievementName The achievement's name 
///
///  @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
///
///  @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
///
///  @param filterAchievementName Filter for achievements whose name contains a string (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUserAchievementGroupResource_*
///
-(NSURLSessionTask*) getUsersAchievementProgressWithAchievementName: (NSString*) achievementName
    filterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler {
    // verify the required parameter 'achievementName' is set
    if (achievementName == nil) {
        NSParameterAssert(achievementName);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"achievementName"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/achievements/{achievement_name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (achievementName != nil) {
        pathParams[@"achievement_name"] = achievementName;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterAchievementDerived != nil) {
        queryParams[@"filter_achievement_derived"] = [filterAchievementDerived isEqual:@(YES)] ? @"true" : @"false";
    }
    if (filterAchievementTagset != nil) {
        queryParams[@"filter_achievement_tagset"] = filterAchievementTagset;
    }
    if (filterAchievementName != nil) {
        queryParams[@"filter_achievement_name"] = filterAchievementName;
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
                              responseType: @"JSAPIPageResourceUserAchievementGroupResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUserAchievementGroupResource_*)data, error);
                                }
                            }];
}

///
/// Retrieve progress on achievements for all users
/// Assets will not be filled in on the resources returned. Use 'Get single achievement progress for user' to retrieve the full resource with assets for a given user as needed. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param filterAchievementDerived Filter for achievements that are derived from other services (optional)
///
///  @param filterAchievementTagset Filter for achievements with specified tags (separated by comma) (optional)
///
///  @param filterAchievementName Filter for achievements whose name contains a string (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned, starting with 1 (optional, default to 1)
///
///  @returns JSAPIPageResourceUserAchievementGroupResource_*
///
-(NSURLSessionTask*) getUsersAchievementsProgressWithFilterAchievementDerived: (NSNumber*) filterAchievementDerived
    filterAchievementTagset: (NSString*) filterAchievementTagset
    filterAchievementName: (NSString*) filterAchievementName
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceUserAchievementGroupResource_* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/achievements"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (filterAchievementDerived != nil) {
        queryParams[@"filter_achievement_derived"] = [filterAchievementDerived isEqual:@(YES)] ? @"true" : @"false";
    }
    if (filterAchievementTagset != nil) {
        queryParams[@"filter_achievement_tagset"] = filterAchievementTagset;
    }
    if (filterAchievementName != nil) {
        queryParams[@"filter_achievement_name"] = filterAchievementName;
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
                              responseType: @"JSAPIPageResourceUserAchievementGroupResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceUserAchievementGroupResource_*)data, error);
                                }
                            }];
}

///
/// Increment an achievement progress record for a user
/// If no progress record yet exists for the user, it will be created. Otherwise it will be updated and the provided value added to the existing progress. May be negative. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param userId The user's id 
///
///  @param achievementName The achievement's name 
///
///  @param progress The amount to add to the progress value (optional)
///
///  @returns JSAPIUserAchievementGroupResource*
///
-(NSURLSessionTask*) incrementAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    progress: (JSAPIIntWrapper*) progress
    completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'achievementName' is set
    if (achievementName == nil) {
        NSParameterAssert(achievementName);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"achievementName"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/achievements/{achievement_name}/progress"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (achievementName != nil) {
        pathParams[@"achievement_name"] = achievementName;
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
    bodyParam = progress;

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
                              responseType: @"JSAPIUserAchievementGroupResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIUserAchievementGroupResource*)data, error);
                                }
                            }];
}

///
/// Set an achievement progress record for a user
/// If no progress record yet exists for the user, it will be created. Otherwise it will be updated and progress set to the provided value. If progress meets or exceeds the achievement's max_value it will be marked as earned and a BRE event will be triggered for the <code>BreAchievementEarnedTrigger</code>. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param userId The user's id 
///
///  @param achievementName The achievement's name 
///
///  @param progress The new progress value (optional)
///
///  @returns JSAPIUserAchievementGroupResource*
///
-(NSURLSessionTask*) setAchievementProgressWithUserId: (NSNumber*) userId
    achievementName: (NSString*) achievementName
    progress: (JSAPIIntWrapper*) progress
    completionHandler: (void (^)(JSAPIUserAchievementGroupResource* output, NSError* error)) handler {
    // verify the required parameter 'userId' is set
    if (userId == nil) {
        NSParameterAssert(userId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"userId"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'achievementName' is set
    if (achievementName == nil) {
        NSParameterAssert(achievementName);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"achievementName"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/users/{user_id}/achievements/{achievement_name}/progress"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (userId != nil) {
        pathParams[@"user_id"] = userId;
    }
    if (achievementName != nil) {
        pathParams[@"achievement_name"] = achievementName;
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
    bodyParam = progress;

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
                              responseType: @"JSAPIUserAchievementGroupResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIUserAchievementGroupResource*)data, error);
                                }
                            }];
}

///
/// Update an achievement definition
/// The existing generated rule, if any, will be deleted. A new rule will be created if a trigger event name is specified in the new version. <br><br><b>Permissions Needed:</b> ACHIEVEMENTS_ADMIN
///  @param name The name of the achievement 
///
///  @param achievement The achievement definition (optional)
///
///  @returns JSAPIAchievementDefinitionResource*
///
-(NSURLSessionTask*) updateAchievementWithName: (NSString*) name
    achievement: (JSAPIAchievementDefinitionResource*) achievement
    completionHandler: (void (^)(JSAPIAchievementDefinitionResource* output, NSError* error)) handler {
    // verify the required parameter 'name' is set
    if (name == nil) {
        NSParameterAssert(name);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"name"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/{name}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (name != nil) {
        pathParams[@"name"] = name;
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
    bodyParam = achievement;

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
                              responseType: @"JSAPIAchievementDefinitionResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIAchievementDefinitionResource*)data, error);
                                }
                            }];
}

///
/// Update an achievement template
/// <b>Permissions Needed:</b> TEMPLATE_ADMIN
///  @param _id The id of the template 
///
///  @param template The updated template (optional)
///
///  @returns JSAPITemplateResource*
///
-(NSURLSessionTask*) updateAchievementTemplateWithId: (NSString*) _id
    template: (JSAPITemplateResource*) template
    completionHandler: (void (^)(JSAPITemplateResource* output, NSError* error)) handler {
    // verify the required parameter '_id' is set
    if (_id == nil) {
        NSParameterAssert(_id);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"_id"] };
            NSError* error = [NSError errorWithDomain:kJSAPIGamificationAchievementsApiErrorDomain code:kJSAPIGamificationAchievementsApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/achievements/templates/{id}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (_id != nil) {
        pathParams[@"id"] = _id;
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
    bodyParam = template;

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
                              responseType: @"JSAPITemplateResource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPITemplateResource*)data, error);
                                }
                            }];
}



@end
