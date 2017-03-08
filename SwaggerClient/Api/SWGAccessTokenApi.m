#import "SWGAccessTokenApi.h"
#import "SWGQueryParamCollection.h"
#import "SWGApiClient.h"
#import "SWGOAuth2Resource.h"


@interface SWGAccessTokenApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation SWGAccessTokenApi

NSString* kSWGAccessTokenApiErrorDomain = @"SWGAccessTokenApiErrorDomain";
NSInteger kSWGAccessTokenApiMissingParamErrorCode = 234513;

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
/// Get access token
/// 
///  @param grantType Grant type 
///
///  @param clientId The id of the client 
///
///  @param clientSecret The secret key of the client.  Used only with a grant_type of client_credentials (optional)
///
///  @param username The username of the client.  Used only with a grant_type of password (optional)
///
///  @param password The password of the client.  Used only with a grant_type of password (optional)
///
///  @returns SWGOAuth2Resource*
///
-(NSURLSessionTask*) getOAuthTokenWithGrantType: (NSString*) grantType
    clientId: (NSString*) clientId
    clientSecret: (NSString*) clientSecret
    username: (NSString*) username
    password: (NSString*) password
    completionHandler: (void (^)(SWGOAuth2Resource* output, NSError* error)) handler {
    // verify the required parameter 'grantType' is set
    if (grantType == nil) {
        NSParameterAssert(grantType);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"grantType"] };
            NSError* error = [NSError errorWithDomain:kSWGAccessTokenApiErrorDomain code:kSWGAccessTokenApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    // verify the required parameter 'clientId' is set
    if (clientId == nil) {
        NSParameterAssert(clientId);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"clientId"] };
            NSError* error = [NSError errorWithDomain:kSWGAccessTokenApiErrorDomain code:kSWGAccessTokenApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/oauth/token"];

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
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[@"application/x-www-form-urlencoded"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    if (grantType) {
        formParams[@"grant_type"] = grantType;
    }
    if (clientId) {
        formParams[@"client_id"] = clientId;
    }
    if (clientSecret) {
        formParams[@"client_secret"] = clientSecret;
    }
    if (username) {
        formParams[@"username"] = username;
    }
    if (password) {
        formParams[@"password"] = password;
    }

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
                              responseType: @"SWGOAuth2Resource*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((SWGOAuth2Resource*)data, error);
                                }
                            }];
}



@end