import requests

# Set up the access token and post message
access_token = 'your_access_token_here'
post_message = 'Hello, world! This is a test post from Python.'

# Set up the API endpoint and parameters
api_endpoint = 'https://graph.facebook.com/me/feed'
params = {'access_token': access_token, 'message': post_message}

# Make the API request to post the message
response = requests.post(api_endpoint, data=params)

# Check the response status code
if response.status_code == 200:
    print('Post successful!')
else:
    print('Post failed with error code: ' + str(response.status_code))