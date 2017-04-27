#import "JSAPIBRERuleEngineExpressionsApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPILookupTypeResource.h"
#import "JSAPIResult.h"


@interface JSAPIBRERuleEngineExpressionsApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIBRERuleEngineExpressionsApi

NSString* kJSAPIBRERuleEngineExpressionsApiErrorDomain = @"JSAPIBRERuleEngineExpressionsApiErrorDomain";
NSInteger kJSAPIBRERuleEngineExpressionsApiMissingParamErrorCode = 234513;

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
/// Get a list of 'lookup' type expressions
/// These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).
///  @returns NSArray<JSAPILookupTypeResource>*
///
-(NSURLSessionTask*) getBREExpressionsWithCompletionHandler: 
    (void (^)(NSArray<JSAPILookupTypeResource>* output, NSError* error)) handler {
    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/bre/expressions/lookup"];

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
                              responseType: @"NSArray<JSAPILookupTypeResource>*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((NSArray<JSAPILookupTypeResource>*)data, error);
                                }
                            }];
}



@end
